// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/TimelineComponent.h"
#include "PlatformMovementComponent.generated.h"

class UCurveFloat;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TWITCHPROTOTYPE_API UPlatformMovementComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPlatformMovementComponent();

protected:
	// Called when the game starts
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

	AActor* owningActor;

	UTimelineComponent* moveTimeline;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Squash & Stretch", meta = (AllowPrivateAccess = "true"))
	UCurveFloat* movementCurve;
	
	FOnTimelineFloat movementUpdateFunc{};

	FOnTimelineEvent movementEndFunc{};
	
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
