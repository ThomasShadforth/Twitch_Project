// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TwitchPrototype/TP_Enemy.h"
#include "TP_GroundEnemy.generated.h"

/**
 * 
 */
UCLASS()
class TWITCHPROTOTYPE_API ATP_GroundEnemy : public ATP_Enemy
{
	GENERATED_BODY()

public:

	ATP_GroundEnemy();

protected:

	virtual void BeginPlay() override;
	
private:

public:
	
};
