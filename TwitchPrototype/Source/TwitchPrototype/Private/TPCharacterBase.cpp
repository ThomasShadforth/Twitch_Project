// Fill out your copyright notice in the Description page of Project Settings.


#include "TPCharacterBase.h"

#include "AbilitySystemComponent.h"

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

void ATPCharacterBase::InitAbilityActorInfo()
{
	
}

void ATPCharacterBase::ApplyEffectToSelf(TSubclassOf<UGameplayEffect> GameplayEffectClass, float Level) const
{
	check(IsValid(GetAbilitySystemComponent()));

	check(GameplayEffectClass);

	FGameplayEffectContextHandle contextHandle = GetAbilitySystemComponent()->MakeEffectContext();
	contextHandle.AddSourceObject(this);
	const FGameplayEffectSpecHandle specHandle = GetAbilitySystemComponent()->MakeOutgoingSpec(GameplayEffectClass, Level, contextHandle);

	GetAbilitySystemComponent()->ApplyGameplayEffectSpecToTarget(*specHandle.Data.Get(), GetAbilitySystemComponent());
}

void ATPCharacterBase::InitializeDefaultAttributes() const
{
	ApplyEffectToSelf(defaultAttributes, 1.f);
}


