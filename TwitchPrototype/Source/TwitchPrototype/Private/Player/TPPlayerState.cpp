// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/TPPlayerState.h"

#include "AbilitySystemComponent.h"

ATPPlayerState::ATPPlayerState()
{
	NetUpdateFrequency = 100.f;
	
	abilitySystemComp = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("Ability System Component"));
	abilitySystemComp->SetIsReplicated(true);
	abilitySystemComp->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	attributeSet = CreateDefaultSubobject<UAttributeSet>(TEXT("Attribute Set"));
}

UAbilitySystemComponent* ATPPlayerState::GetAbilitySystemComponent() const
{
	return abilitySystemComp;
}
