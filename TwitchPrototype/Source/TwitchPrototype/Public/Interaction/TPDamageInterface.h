// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TPDamageInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UTPDamageInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class TWITCHPROTOTYPE_API ITPDamageInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void DamageCharacter(AActor* DamageCauser, float KnockbackModifier = 0);
	
};
