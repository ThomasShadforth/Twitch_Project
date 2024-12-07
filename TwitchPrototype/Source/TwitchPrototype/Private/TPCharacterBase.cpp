// Fill out your copyright notice in the Description page of Project Settings.


#include "TPCharacterBase.h"

// Sets default values
ATPCharacterBase::ATPCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

UAbilitySystemComponent* ATPCharacterBase::GetAbilitySystemComponent() const
{
	return abilitySystemComp;
}

// Called when the game starts or when spawned
void ATPCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}


