// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PlayerCharacterInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UPlayerCharacterInterface : public UInterface
{
	GENERATED_BODY()
};

class ATP_PlayerController;
/**
 * 
 */
class TWITCHPROTOTYPE_API IPlayerCharacterInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void PlayerJump();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void PlayerStopJump();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void PlayerSprint();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void PlayerStopSprint();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void PlayerStomp();
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	bool GetPlayerMoveDisabled();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	bool GetHasPlayerBeenHit();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void SetHasPlayerBeenHit(bool bHasBeenHit);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	ATP_PlayerController* GetPlayerCharacterController();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void SetIsOnLadder(bool bOnLadder);
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	bool GetIsOnLadder();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	UCharacterMovementComponent* GetPlayerMovementComponent();
	
};
