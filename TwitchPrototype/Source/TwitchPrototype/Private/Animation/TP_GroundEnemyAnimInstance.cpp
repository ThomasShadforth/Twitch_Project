// Fill out your copyright notice in the Description page of Project Settings.


#include "Animation/TP_GroundEnemyAnimInstance.h"

#include "TwitchPrototype/TP_Enemy.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/CharacterMovementComponent.h"

UTP_GroundEnemyAnimInstance::UTP_GroundEnemyAnimInstance()
{
	
}

void UTP_GroundEnemyAnimInstance::UpdateAnimationProperties(float DeltaTime)
{
	Super::UpdateAnimationProperties(DeltaTime);

	if(enemyCharacter && enemyMovement == nullptr)
	{
		enemyMovement = enemyCharacter->GetCharacterMovement();
		//UE_LOG(LogTemp, Warning, TEXT("GETTING MOVEMENT"));
	}

	if(enemyCharacter && enemyMovement)
	{
		velocity = enemyMovement->Velocity;
		groundSpeed = UKismetMathLibrary::VSizeXY(velocity);
		
		SetShouldMove();
	}
}

void UTP_GroundEnemyAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	if(enemyCharacter)
	{
		enemyMovement = enemyCharacter->GetCharacterMovement();
	}
}

void UTP_GroundEnemyAnimInstance::SetShouldMove()
{
	FVector acceleration = velocity;
	acceleration.Z = 0;
	bool bAccelerationNotZero = UKismetMathLibrary::NotEqual_VectorVector(acceleration, FVector::Zero(), 0);
	bool bGroundSpeedActive = groundSpeed > 3.0f;

	
	
	//UE_LOG(LogTemp, Warning, TEXT("Ground Speed Active: %hs"), bGroundSpeedActive ? "true" : "false");
	//UE_LOG(LogTemp, Warning, TEXT("Acceleration is not zero: %hs"), bAccelerationNotZero ? "true" : "false");

	bShouldMove = bAccelerationNotZero && bGroundSpeedActive;
}
