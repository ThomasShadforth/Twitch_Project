// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/TPBaseAbilitySystemComp.h"

void UTPBaseAbilitySystemComp::AbilityActorInfoSet()
{
	OnGameplayEffectAppliedDelegateToSelf.AddUObject(this, &UTPBaseAbilitySystemComp::EffectApplied);
}

void UTPBaseAbilitySystemComp::EffectApplied(UAbilitySystemComponent* ASC, const FGameplayEffectSpec& EffectSpec,
	FActiveGameplayEffectHandle EffectHandle)
{
	FGameplayTagContainer tagContainer;
	EffectSpec.GetAllAssetTags(tagContainer);

	effectAssetTags.Broadcast(tagContainer);
}
