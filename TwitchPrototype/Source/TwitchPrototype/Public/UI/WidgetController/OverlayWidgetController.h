// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/WidgetController/WidgetControllerBase.h"
#include "AbilitySystem/TPAttributeSet.h"
#include "OverlayWidgetController.generated.h"


struct FOnAttributeChangeData;
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHealthChangedSignature, float, newHealth);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMaxHealthChangedSignature, float, newMaxHealth);
/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class TWITCHPROTOTYPE_API UOverlayWidgetController : public UWidgetControllerBase
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes")
	FOnHealthChangedSignature OnHealthChanged;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes")
	FOnMaxHealthChangedSignature OnMaxHealthChanged;
	
protected:

private:

public:

	virtual void BroadcastInitialValues() override;

	virtual void BindCallbacksToDependencies() override;

	void HealthChanged(const FOnAttributeChangeData& data) const;
	void MaxhHealthChanged(const FOnAttributeChangeData& data) const;
	
};
