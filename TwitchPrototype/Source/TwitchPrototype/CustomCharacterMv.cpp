// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomCharacterMv.h"
#include "TP_PlayerCharacter.h"
#include "GameFramework/Character.h"

UCustomCharacterMv::UCustomCharacterMv() :
jumpingGravityScale(1.7f),
fallingGravityScale(3.0f)
{
	
}


void UCustomCharacterMv::BeginPlay()
{
	ownerCharacter = Cast<ATP_PlayerCharacter>(GetOwner());
}

void UCustomCharacterMv::SetGravityScale()
{
	if(ownerCharacter == nullptr || ownerCharacter->GetInAirAction()) return;

	if(ownerCharacter->bPressedJump)
	{
		GravityScale = jumpingGravityScale;
		
	} else if(!ownerCharacter->bPressedJump && IsFalling())
	{
		GravityScale = fallingGravityScale;
	} else
	{
		GravityScale = 1.0f;
	}
}

void UCustomCharacterMv::TickComponent(float DeltaTime, ELevelTick TickType,
                                       FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	SetGravityScale();
	
}

