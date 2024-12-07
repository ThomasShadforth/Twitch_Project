// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/TPAttributeSet.h"

#include "Net/UnrealNetwork.h"


UTPAttributeSet::UTPAttributeSet()
{
	InitHealth(40.f);
	InitMaxHealth(40.f);
}

void UTPAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UTPAttributeSet, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UTPAttributeSet, MaxHealth, COND_None, REPNOTIFY_Always);
}

void UTPAttributeSet::OnRep_Health(const FGameplayAttributeData& oldHealth) const
{
	//Informs the ability system that a value (Health) has changed, oldHealth is stored in case it needs to be rolled back
	GAMEPLAYATTRIBUTE_REPNOTIFY(UTPAttributeSet, Health, oldHealth);
}

void UTPAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& oldMaxHealth) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UTPAttributeSet, MaxHealth, oldMaxHealth);
}
