// Fill out your copyright notice in the Description page of Project Settings.


#include "Animation/TP_PlayerAnimInstance.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "TwitchPrototype/TP_PlayerCharacter.h"

UTP_PlayerAnimInstance::UTP_PlayerAnimInstance()
{
	
}

void UTP_PlayerAnimInstance::UpdateAnimationProperties(float DeltaTime)
{
	if(playerCharacter == nullptr)
	{
		playerCharacter = Cast<ATP_PlayerCharacter>(TryGetPawnOwner());

		if(playerCharacter)
		{
			characterMovement = playerCharacter->GetCharacterMovement();
		}
		
	}

	if(playerCharacter && characterMovement)
	{
		//Do everything here
		//Measure speed, velocity, etc. etc.
		velocity = characterMovement->Velocity;
		groundSpeed = UKismetMathLibrary::VSizeXY(velocity);

		bIsFalling = characterMovement->IsFalling();

		SetShouldMove();
		
	}
}

void UTP_PlayerAnimInstance::NativeInitializeAnimation()
{
	playerCharacter = Cast<ATP_PlayerCharacter>(TryGetPawnOwner());

	if(playerCharacter)
	{
		characterMovement = playerCharacter->GetCharacterMovement();
	}
}

void UTP_PlayerAnimInstance::SetShouldMove()
{
	bool bAccelerationNotZero = UKismetMathLibrary::NotEqual_VectorVector(characterMovement->GetCurrentAcceleration(), FVector::Zero(), 0);
	bool bGroundSpeedActive = groundSpeed > 3.0f;

	bShouldMove = bAccelerationNotZero && bGroundSpeedActive;
}
