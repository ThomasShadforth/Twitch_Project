// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "TPAttributeSet.generated.h"

/**
 * 
 */

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

UCLASS()
class TWITCHPROTOTYPE_API UTPAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:

	UTPAttributeSet();

	UPROPERTY(Replicated, ReplicatedUsing = OnRep_Health, VisibleAnywhere, Category = "Vital Attributes")
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UTPAttributeSet, Health);

	UPROPERTY(Replicated, ReplicatedUsing = OnRep_Health, VisibleAnywhere, Category = "Vital Attributes")
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UTPAttributeSet, MaxHealth);
	
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION()
	void OnRep_Health(const FGameplayAttributeData& oldHealth) const;

	UFUNCTION()
	void OnRep_MaxHealth(const FGameplayAttributeData& oldMaxHealth) const;
	
protected:

private:

public:
	
};
