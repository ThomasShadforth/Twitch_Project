// Fill out your copyright notice in the Description page of Project Settings.


#include "TP_EnemyController.h"

#include "TP_Enemy.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"

ATP_EnemyController::ATP_EnemyController()
{
	blackboardComponent = CreateDefaultSubobject<UBlackboardComponent>(TEXT("Blackboard Component"));
	check(blackboardComponent);

	behaviorTreeComp = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("Behaviour Tree Component"));
	check(behaviorTreeComp);
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
