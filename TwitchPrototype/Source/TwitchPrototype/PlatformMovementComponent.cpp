// Fill out your copyright notice in the Description page of Project Settings.



#include "PlatformMovementComponent.h"
#include "Math/Vector.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values for this component's properties
UPlatformMovementComponent::UPlatformMovementComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	moveTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("Movement Timeline"));
	movementUpdateFunc.BindUFunction(this, FName("MovementUpdate"));
	movementEndFunc.BindUFunction(this, FName("MovementEnd"));
}


// Called when the game starts
void UPlatformMovementComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	owningActor = GetOwner();

	if(movementCurve)
	{
		moveTimeline->AddInterpFloat(movementCurve, movementUpdateFunc, FName("Alpha"));
		moveTimeline->SetTimelineFinishedFunc(movementEndFunc);

		moveTimeline->SetLooping(false);
		moveTimeline->PlayFromStart();
	}

	startPosition = owningActor->GetActorLocation();
	
	const FVector worldEndPos = UKismetMathLibrary::TransformLocation(owningActor->GetActorTransform(), endPositionWidget);
	endPosition = worldEndPos;
}


void UPlatformMovementComponent::MovementUpdate(float Alpha)
{
	FVector currentPosition{};

	currentPosition = FMath::Lerp(startPosition, endPosition, Alpha);

	owningActor->SetActorLocation(currentPosition);
}

void UPlatformMovementComponent::MovementEnd()
{
	if(bShouldWait)
	{
		owningActor->GetWorldTimerManager().SetTimer(waitTimerHandle, this, &UPlatformMovementComponent::HandlePlatformReverse, platformWaitTime);
	} else
	{
		HandlePlatformReverse();
	}
}

void UPlatformMovementComponent::HandlePlatformReverse()
{
	if(!bIsReversing)
	{
		moveTimeline->ReverseFromEnd();
		bIsReversing = true;
	} else
	{
		moveTimeline->PlayFromStart();
		bIsReversing = false;
	}
}


// Called every frame
void UPlatformMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

