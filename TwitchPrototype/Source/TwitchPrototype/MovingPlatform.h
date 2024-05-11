// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/TimelineComponent.h"
#include "MovingPlatform.generated.h"

UCLASS()
class TWITCHPROTOTYPE_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	UFUNCTION()
	void MovementUpdate(float Alpha);

	UFUNCTION()
	void MovementEnd();
	
	void HandlePlatformReverse();
private:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	bool bShouldWait;

	bool bIsReversing;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float platformWaitTime;

	FVector startPosition;

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true", MakeEditWidget = "true"))
	FVector endPositionWidget;

	FVector endPosition;
	
	FTimerHandle waitTimerHandle;

	UTimelineComponent* moveTimeline;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	UCurveFloat* movementCurve;
	
	FOnTimelineFloat movementUpdateFunc{};

	FOnTimelineEvent movementEndFunc{};

	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
