// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/TimelineComponent.h"
#include "SplineMovingPlatform.generated.h"

UCLASS()
class TWITCHPROTOTYPE_API ASplineMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASplineMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void OnConstruction(const FTransform& Transform) override;
	
	void StartMoveTimeline();

	UFUNCTION()
	void MovementUpdate(float Alpha);

	UFUNCTION()
	void MovementEnd();
	
private:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Properties", meta = (AllowPrivateAccess = "true"))
	class USplineComponent* platformSplinePath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Properties", meta = (AllowPrivateAccess = "true"))
	AActor* affectedActor;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	UCurveFloat* movementCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float timelineLength;

	UTimelineComponent* moveTimeline;

	FOnTimelineFloat movementUpdateFunc{};

	FOnTimelineEvent movementEndFunc{};
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
};
