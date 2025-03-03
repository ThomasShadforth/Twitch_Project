// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "TP_GameInstance.generated.h"

/**
 * 
 */

class UGameSaveData;

UCLASS()
class TWITCHPROTOTYPE_API UTP_GameInstance : public UGameInstance
{
	GENERATED_BODY()

public:

	virtual void Init() override;
	
protected:

private:

	UGameSaveData* gameSaveData;
	
public:
	
};
