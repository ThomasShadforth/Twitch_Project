// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WidgetControllerBase.generated.h"

/**
 * 
 */

class UAbilitySystemComponent;
class UAttributeSet;

USTRUCT(BlueprintType)
struct FWidgetControllerParams
{
	GENERATED_BODY()

	FWidgetControllerParams(){}
	FWidgetControllerParams(APlayerController* pc, APlayerState* ps, UAbilitySystemComponent* asc, UAttributeSet* as) :
		playerController(pc),
		playerState(ps),
		abilitySystemComponent(asc),
		attributeSet(as)
	{
		
	}

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	APlayerController* playerController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	APlayerState* playerState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAbilitySystemComponent* abilitySystemComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAttributeSet* attributeSet;
	
};

UCLASS()
class TWITCHPROTOTYPE_API UWidgetControllerBase : public UObject
{
	GENERATED_BODY()

public:

protected:

	UPROPERTY(BlueprintReadOnly, Category = "Widget Controller")
	APlayerController* playerController;

	UPROPERTY(BlueprintReadOnly, Category = "Widget Controller")
	APlayerState* playerState;

	UPROPERTY(BlueprintReadOnly, Category = "Widget Controller")
	UAbilitySystemComponent* abilitySystemComponent;

	UPROPERTY(BlueprintReadOnly, Category = "Widget Controller")
	UAttributeSet* attributeSet;
	
private:

public:

	UFUNCTION(BlueprintCallable)
	void SetWidgetControllerParams(const FWidgetControllerParams& wcParms);

	virtual void BroadcastInitialValues();

	virtual void BindCallbacksToDependencies();
	
};
