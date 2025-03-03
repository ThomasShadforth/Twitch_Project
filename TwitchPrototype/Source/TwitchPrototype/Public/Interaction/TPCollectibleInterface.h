// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TPCollectibleInterface.generated.h"

class ATP_CollectibleBase;

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UTPCollectibleInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class TWITCHPROTOTYPE_API ITPCollectibleInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void CollectedCollectible(ATP_CollectibleBase* Collectible);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void TestCollectedCollectible();
	
};
