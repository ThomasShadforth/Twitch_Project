// Fill out your copyright notice in the Description page of Project Settings.


#include "TP_EnemyController.h"

#include "TP_Enemy.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Public/TPEnemyInterface.h"

ATP_EnemyController::ATP_EnemyController()
{
	blackboardComponent = CreateDefaultSubobject<UBlackboardComponent>(TEXT("Blackboard Component"));
	check(blackboardComponent);

	behaviorTreeComp = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("Behaviour Tree Component"));
	check(behaviorTreeComp);

	aiPerception = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AI Perception"));
	SetPerceptionComponent(*aiPerception);

	sightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight Config"));
	GetPerceptionComponent()->ConfigureSense((*sightConfig));

	if(sightConfig)
	{
		sightConfig->SightRadius = 500.0f;
		sightConfig->LoseSightRadius = sightConfig->SightRadius + 25.f;
		sightConfig->PeripheralVisionAngleDegrees = 50.f;
		sightConfig->SetMaxAge(5.f);
		sightConfig->AutoSuccessRangeFromLastSeenLocation = 520.f;
		sightConfig->DetectionByAffiliation.bDetectEnemies = true;
		sightConfig->DetectionByAffiliation.bDetectFriendlies = true;
		sightConfig->DetectionByAffiliation.bDetectNeutrals = true;
		GetPerceptionComponent()->SetDominantSense(sightConfig->GetSenseImplementation());
		GetPerceptionComponent()->OnTargetPerceptionUpdated.AddDynamic(this, &ATP_EnemyController::DetectedTarget);
		//Determine whether to add the implementation for target perception update in c++
	}
	
}

void ATP_EnemyController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	if(InPawn == nullptr) return;

	ATP_Enemy* enemy = Cast<ATP_Enemy>(InPawn);

	//To do: Check if enemy has behaviour tree
	if(enemy)
	{
		if(enemy->GetBehaviourTree())
		{
			blackboardComponent->InitializeBlackboard(*(enemy->GetBehaviourTree()->GetBlackboardAsset()));
		}
	}
}

void ATP_EnemyController::BeginPlay()
{
	Super::BeginPlay();

	if(ACharacter* character = Cast<ACharacter>(GetPawn()))
	{
		
		if(UKismetSystemLibrary::DoesImplementInterface(character, UTPEnemyInterface::StaticClass()))
		{
			const bool bActivatePerception = ITPEnemyInterface::Execute_GetShouldActivatePerception(character);
			
			if(bActivatePerception)
			{
				UE_LOG(LogTemp, Warning, TEXT("PERCEPTION ACTIVE"));
			}
			
			GetPerceptionComponent()->SetActive(bActivatePerception);
			GetPerceptionComponent()->SetSenseEnabled(UAISense_Sight::StaticClass(), bActivatePerception);
		}
	}
	
}
