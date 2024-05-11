// Fill out your copyright notice in the Description page of Project Settings.


#include "SplineMovingPlatform.h"
#include "Components/SplineComponent.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
ASplineMovingPlatform::ASplineMovingPlatform() :
timelineLength(5.0f)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	platformSplinePath = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));

	moveTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("Move Timeline"));
	movementUpdateFunc.BindUFunction(this, FName("MovementUpdate"));
	movementEndFunc.BindUFunction(this, FName("MovementEnd"));
}

// Called when the game starts or when spawned
void ASplineMovingPlatform::BeginPlay()
{
	Super::BeginPlay();
	
	if(movementCurve)
	{
		moveTimeline->AddInterpFloat(movementCurve, movementUpdateFunc, FName("Alpha"));
		moveTimeline->SetPlayRate(1 / timelineLength);
		moveTimeline->SetTimelineFinishedFunc(movementEndFunc);
	}

	StartMoveTimeline();
}

void ASplineMovingPlatform::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	FVector timelineStartLocation = platformSplinePath->GetLocationAtSplinePoint(0, ESplineCoordinateSpace::World);


	if(affectedActor)
	{
		affectedActor->SetActorLocation(timelineStartLocation);
	}
}

void ASplineMovingPlatform::StartMoveTimeline()
{
	moveTimeline->PlayFromStart();
}

void ASplineMovingPlatform::MovementUpdate(float Alpha)
{
	int splinePoints = platformSplinePath->GetNumberOfSplinePoints() - 1;
	float splinePointDist = platformSplinePath->GetDistanceAlongSplineAtSplinePoint(splinePoints);

	float distance = FMath::Lerp(0, splinePointDist, Alpha);

	FVector currentLocation = platformSplinePath->GetLocationAtDistanceAlongSpline(distance, ESplineCoordinateSpace::World);
	FRotator currentRotation = UKismetMathLibrary::MakeRotFromX(platformSplinePath->GetTangentAtDistanceAlongSpline(distance, ESplineCoordinateSpace::World));

	
	affectedActor->SetActorLocation(currentLocation);
	affectedActor->SetActorRotation(currentRotation);
}

void ASplineMovingPlatform::MovementEnd()
{
	StartMoveTimeline();
}

// Called every frame
void ASplineMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

