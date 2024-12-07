// Fill out your copyright notice in the Description page of Project Settings.


#include "TP_Enemy.h"

#include "EnemyAIStates.h"
#include "BehaviorTree/BlackboardComponent.h"

// Sets default values
ATP_Enemy::ATP_Enemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	projectileFirePoint = CreateDefaultSubobject<USceneComponent>(TEXT("Projectile Fire Point"));
	projectileFirePoint->SetupAttachment(RootComponent);
	
}

// Called when the game starts or when spawned
void ATP_Enemy::BeginPlay()
{
	Super::BeginPlay();

	SetEnemyController(GetController());

	if(GetEnemyController())
	{
		GetEnemyController()->RunBehaviorTree(GetBehaviourTree());
	}
	
}

// Called every frame
void ATP_Enemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATP_Enemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

AAIPatrolPath* ATP_Enemy::GetPatrolRoute_Implementation()
{
	return ITPEnemyInterface::GetPatrolRoute_Implementation();
}

void ATP_Enemy::SetMoveSpeed_Implementation(EMoveSpeedTypes speedType)
{
	ITPEnemyInterface::SetMoveSpeed_Implementation(speedType);
}

bool ATP_Enemy::GetShouldActivatePerception_Implementation()
{
	if(bActivateAIPerception)
	{
		UE_LOG(LogTemp, Warning, TEXT("WILL ACTIVATE PERCEPTION"));
	} else
	{
		UE_LOG(LogTemp, Warning, TEXT("WILL DISABLE PERCEPTION"));
	}
	
	return bActivateAIPerception;
}

USceneComponent* ATP_Enemy::GetProjectileFirePoint_Implementation()
{
	return projectileFirePoint;
}

TSubclassOf<ATP_BaseProjectile> ATP_Enemy::GetEnemyProjectileClass_Implementation()
{
	return enemyProjectileClass;
}

float ATP_Enemy::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator,
	AActor* DamageCauser)
{

	UE_LOG(LogTemp, Warning, TEXT("ENEMY TAKING DAMAGE!!"));
	
	return DamageAmount;
}

void ATP_Enemy::DamageEnemy_Implementation()
{
	ITPEnemyInterface::DamageEnemy_Implementation();

	UE_LOG(LogTemp, Warning, TEXT("ENEMY IS BEING DAMAGED. KILL THEM"));
}

void ATP_Enemy::SetStateAsPassive()
{
	if(!GetEnemyController()) return;

	GetEnemyController()->GetBlackboardComp()->SetValueAsEnum(FName("CurrentState"), (uint8)EEnemyAIStates::EEAIS_Passive);
}

void ATP_Enemy::SetStateAsAttack(AActor* attackTarget)
{

	UE_LOG(LogTemp, Warning, TEXT("METHOD CALLED: SET STATE AS ATTACK"));
	
	if(!GetEnemyController()) return;

	UE_LOG(LogTemp, Warning, TEXT("SETTING ATTACK TARGET AND STATE"));

	GetEnemyController()->GetBlackboardComp()->SetValueAsEnum(FName("CurrentState"), (uint8)EEnemyAIStates::EEAIS_Attack);
	GetEnemyController()->GetBlackboardComp()->SetValueAsObject(FName("PlayerTarget"), attackTarget);
}

void ATP_Enemy::SetStateAsCower(AActor* playerTarget)
{
	if(!GetEnemyController()) return;

	GetEnemyController()->GetBlackboardComp()->SetValueAsEnum(FName("CurrentState"), (uint8)EEnemyAIStates::EEAIS_Cower);
	GetEnemyController()->GetBlackboardComp()->SetValueAsObject(FName("PlayerTarget"), playerTarget);
}

void ATP_Enemy::SetStateAsRetreat()
{
	if(!GetEnemyController()) return;

	GetEnemyController()->GetBlackboardComp()->SetValueAsEnum(FName("CurrentState"), (uint8)EEnemyAIStates::EEAIS_Retreat);
	bIsRetreating = true;
}

