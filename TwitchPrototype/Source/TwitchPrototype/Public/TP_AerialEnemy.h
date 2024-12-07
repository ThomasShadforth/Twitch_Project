// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TwitchPrototype/TP_Enemy.h"
#include "TP_AerialEnemy.generated.h"


class UTP_FlyingAIComponent;

/**
 * 
 */
UCLASS()
class TWITCHPROTOTYPE_API ATP_AerialEnemy : public ATP_Enemy
{
	GENERATED_BODY()
	
public:

	ATP_AerialEnemy();
	
protected:

	virtual void BeginPlay() override;
	
private:

	UPROPERTY(EditAnywhere)
	UTP_FlyingAIComponent* flyingComponent;
	
public:
	
};
