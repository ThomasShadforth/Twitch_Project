// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/TP_EnemyAnimInstanceBase.h"
#include "TP_AerialEnemyAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class TWITCHPROTOTYPE_API UTP_AerialEnemyAnimInstance : public UTP_EnemyAnimInstanceBase
{
	GENERATED_BODY()

public:

	UTP_AerialEnemyAnimInstance();
	
	virtual void UpdateAnimationProperties(float DeltaTime) override;

	virtual void NativeInitializeAnimation() override;
	
protected:

private:

public:
	
};
