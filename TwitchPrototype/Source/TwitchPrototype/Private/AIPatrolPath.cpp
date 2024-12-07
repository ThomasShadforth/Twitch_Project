// Fill out your copyright notice in the Description page of Project Settings.


#include "AIPatrolPath.h"

#include "Components/SplineComponent.h"

// Sets default values
AAIPatrolPath::AAIPatrolPath()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	patrolRoute = CreateDefaultSubobject<USplineComponent>(TEXT("Patrol Route"));
	patrolRoute->SetupAttachment(RootComponent);
	
}

// Called when the game starts or when spawned
void AAIPatrolPath::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAIPatrolPath::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAIPatrolPath::IncrementPatrolIndex()
{
	patrolPointIndex += direction;
	
	if(patrolPointIndex == patrolRoute->GetNumberOfSplinePoints() - 1)
	{
		if(bWillLoop)
		{
			patrolPointIndex = 0;
		} else
		{
			direction = -1;
		}
		
	} else if(patrolPointIndex == 0)
	{
		if(bWillLoop)
		{
			
		} else
		{
			direction = 1;
		}
	}
	
}

bool AAIPatrolPath::IncrementRetreatIndex()
{
	patrolPointIndex += direction;

	if(patrolPointIndex == patrolRoute->GetNumberOfSplinePoints())
	{
		return true;
	}

	return false;
}

FVector AAIPatrolPath::GetSplinePointAsWorldPosition()
{
	return patrolRoute->GetLocationAtSplinePoint(patrolPointIndex, ESplineCoordinateSpace::World);
}

