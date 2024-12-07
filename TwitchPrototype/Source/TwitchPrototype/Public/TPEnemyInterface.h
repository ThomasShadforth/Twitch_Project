// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MoveSpeedTypes.h"
#include "TPEnemyInterface.generated.h"

// This class does not need to be modified.

class AAIPatrolPath;

UINTERFACE(MinimalAPI)
class UTPEnemyInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class TWITCHPROTOTYPE_API ITPEnemyInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	AAIPatrolPath* GetPatrolRoute();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void SetMoveSpeed(EMoveSpeedTypes speedType);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	bool GetShouldActivatePerception();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void DamageEnemy();
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	USceneComponent* GetProjectileFirePoint();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	TSubclassOf<class ATP_BaseProjectile> GetEnemyProjectileClass();
	
};
