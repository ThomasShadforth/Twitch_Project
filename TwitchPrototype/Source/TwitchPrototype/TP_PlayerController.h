// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TP_PlayerController.generated.h"

/**
 * 
 */
UCLASS()
class TWITCHPROTOTYPE_API ATP_PlayerController : public APlayerController
{
	GENERATED_BODY()

	ATP_PlayerController();
	
protected:
	virtual void BeginPlay() override;

public:
	
private:

public:

	
};
