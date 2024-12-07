// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "TPCharacterBase.generated.h"

class UAbilitySystemComponent;
class UAttributeSet;

UCLASS()
class TWITCHPROTOTYPE_API ATPCharacterBase : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATPCharacterBase();

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY()
	TObjectPtr<UAbilitySystemComponent> abilitySystemComp;

	UPROPERTY()
	TObjectPtr<UAttributeSet> attributeSet;
	
public:

	FORCEINLINE UAttributeSet* GetAttributeSet() const {return attributeSet;}
	
};
