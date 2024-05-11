// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

#include "Kismet/KismetMathLibrary.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	moveTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("Move Timeline"));
	movementUpdateFunc.BindUFunction(this, FName("MovementUpdate"));
	movementEndFunc.BindUFunction(this, FName("MovementEnd"));
	
}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

	startPosition = GetActorLocation();

	const FVector worldEndPos = UKismetMathLibrary::TransformLocation(GetActorTransform(), endPositionWidget);
	endPosition = worldEndPos;
	
	if(movementCurve)
	{
		moveTimeline->AddInterpFloat(movementCurve, movementUpdateFunc, FName("Alpha"));
		moveTimeline->SetTimelineFinishedFunc(movementEndFunc);

		moveTimeline->SetLooping(false);
		moveTimeline->PlayFromStart();
	}
	
}

void AMovingPlatform::MovementUpdate(float Alpha)
{
	FVector currentPosition{};
	currentPosition = FMath::Lerp(startPosition, endPosition, Alpha);
	SetActorLocation(currentPosition);
}

void AMovingPlatform::MovementEnd()
{
	if(bShouldWait)
	{
		GetWorldTimerManager().SetTimer(waitTimerHandle, this, &AMovingPlatform::HandlePlatformReverse, platformWaitTime);
	} else
	{
		HandlePlatformReverse();
	}
}

void AMovingPlatform::HandlePlatformReverse()
{
	if(bIsReversing)
	{
		moveTimeline->PlayFromStart();
		bIsReversing = false;
	}
	else
	{
		moveTimeline->ReverseFromEnd();
		bIsReversing = true;
	}
}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

