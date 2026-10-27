// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "TP_EnemyAnimInstanceBase.generated.h"

/**
 * 
 */

class ATP_Enemy;

UCLASS()
class TWITCHPROTOTYPE_API UTP_EnemyAnimInstanceBase : public UAnimInstance
{
	GENERATED_BODY()

public:

	UTP_EnemyAnimInstanceBase();

	UFUNCTION(BlueprintCallable)
	virtual void UpdateAnimationProperties(float DeltaTime);

	virtual void NativeInitializeAnimation() override;
	
protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	ATP_Enemy* enemyCharacter;
	
private:

public:
	
};
