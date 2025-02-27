// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h"
#include "TPPlayerState.generated.h"


class UAbilitySystemComponent;
class UAttributeSet;

/**
 * 
 */
UCLASS()
class TWITCHPROTOTYPE_API ATPPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:

	ATPPlayerState();

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	
protected:

	UPROPERTY()
	TObjectPtr<UAbilitySystemComponent> abilitySystemComp;

	UPROPERTY()
	TObjectPtr<UAttributeSet> attributeSet;
	
private:

public:

	FORCEINLINE UAttributeSet* GetAttributeSet() const {return attributeSet;}
	
};
