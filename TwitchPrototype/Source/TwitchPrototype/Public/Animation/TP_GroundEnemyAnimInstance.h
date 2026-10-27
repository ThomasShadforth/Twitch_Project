// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/TP_EnemyAnimInstanceBase.h"
#include "TP_GroundEnemyAnimInstance.generated.h"

/**
 * 
 */
class UCharacterMovementComponent;

UCLASS()
class TWITCHPROTOTYPE_API UTP_GroundEnemyAnimInstance : public UTP_EnemyAnimInstanceBase
{
	GENERATED_BODY()

public:
	
	UTP_GroundEnemyAnimInstance();
	
	virtual void UpdateAnimationProperties(float DeltaTime) override;
	
	virtual void NativeInitializeAnimation() override;

protected:

	void SetShouldMove();
	
private:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UCharacterMovementComponent* enemyMovement;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float groundSpeed;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	FVector velocity;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	bool bShouldMove;
	
public:
	
};
