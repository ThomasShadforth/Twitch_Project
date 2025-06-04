// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "GameSaveData.generated.h"

/**
 * 
 */

class APlayerState;
class ATP_CollectibleBase;

UCLASS()
class TWITCHPROTOTYPE_API UGameSaveData : public USaveGame
{
	GENERATED_BODY()

public:

	UGameSaveData();
	
protected:

private:

public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	APlayerState* playerState;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TMap<FString, ATP_CollectibleBase*> cheeseMap;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TMap<FString, ATP_CollectibleBase*> fruitMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName lastSavedLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString slotName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 livesCount;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float PlayerMaxHealth;
	
};
