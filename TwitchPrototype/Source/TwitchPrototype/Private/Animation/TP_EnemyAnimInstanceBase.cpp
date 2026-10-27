// Fill out your copyright notice in the Description page of Project Settings.


#include "Animation/TP_EnemyAnimInstanceBase.h"

#include "TwitchPrototype/TP_Enemy.h"

UTP_EnemyAnimInstanceBase::UTP_EnemyAnimInstanceBase()
{
	
}

void UTP_EnemyAnimInstanceBase::UpdateAnimationProperties(float DeltaTime)
{
	if(enemyCharacter == nullptr)
	{
		enemyCharacter = Cast<ATP_Enemy>(TryGetPawnOwner());
	}
}

void UTP_EnemyAnimInstanceBase::NativeInitializeAnimation()
{
	enemyCharacter = Cast<ATP_Enemy>(TryGetPawnOwner());
}
