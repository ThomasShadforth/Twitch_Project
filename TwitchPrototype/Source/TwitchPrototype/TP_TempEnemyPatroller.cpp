// Fill out your copyright notice in the Description page of Project Settings.


#include "TP_TempEnemyPatroller.h"

#include "TP_PlayerCharacter.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Components/SphereComponent.h"
#include "Kismet/KismetMathLibrary.h"

ATP_TempEnemyPatroller::ATP_TempEnemyPatroller()
{
	PrimaryActorTick.bCanEverTick = true;

	aggroSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Aggro Sphere"));
	aggroSphere->SetupAttachment(RootComponent);
}

void ATP_TempEnemyPatroller::BeginPlay()
{
	Super::BeginPlay();

	const FVector worldPatrolPoint1 = UKismetMathLibrary::TransformLocation(GetActorTransform(), patrolPoint1);
	const FVector worldPatrolPoint2 = UKismetMathLibrary::TransformLocation(GetActorTransform(), patrolPoint2);
	
	

	if(GetEnemyController())
	{
		GetEnemyController()->GetBlackboardComp()->SetValueAsVector(TEXT("PatrolPoint1"), worldPatrolPoint1);
		GetEnemyController()->GetBlackboardComp()->SetValueAsVector(TEXT("PatrolPoint2"), worldPatrolPoint2);
	}

	aggroSphere->OnComponentBeginOverlap.AddDynamic(this, &ATP_TempEnemyPatroller::AggroSphereBeginOverlap);
	aggroSphere->OnComponentEndOverlap.AddDynamic(this, &ATP_TempEnemyPatroller::AggroSphereEndOverlap);
	
}

void ATP_TempEnemyPatroller::AggroSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if(OtherActor == nullptr) return;
	
	ATP_PlayerCharacter* player = Cast<ATP_PlayerCharacter>(OtherActor);

	if(player == nullptr) return;

	if(GetEnemyController())
	{
		if(GetEnemyController()->GetBlackboardComp())
		{
			GetEnemyController()->GetBlackboardComp()->SetValueAsBool(TEXT("bCanSeePlayer"), true);
			GetEnemyController()->GetBlackboardComp()->SetValueAsObject(TEXT("PlayerTarget"), player);
		}
	}
	
}

void ATP_TempEnemyPatroller::AggroSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if(OtherActor == nullptr) return;
	
	ATP_PlayerCharacter* player = Cast<ATP_PlayerCharacter>(OtherActor);

	if(player == nullptr) return;

	if(GetEnemyController())
	{
		if(GetEnemyController()->GetBlackboardComp())
		{
			GetEnemyController()->GetBlackboardComp()->SetValueAsBool(TEXT("bCanSeePlayer"), false);
			GetEnemyController()->GetBlackboardComp()->SetValueAsObject(TEXT("PlayerTarget"), nullptr);
		}
	}
}

void ATP_TempEnemyPatroller::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
