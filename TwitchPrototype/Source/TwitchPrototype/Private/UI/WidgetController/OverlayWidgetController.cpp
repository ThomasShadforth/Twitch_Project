// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/WidgetController/OverlayWidgetController.h"
#include "AbilitySystem/TPAttributeSet.h"

void UOverlayWidgetController::BroadcastInitialValues()
{
	UTPAttributeSet* tpAttributes = CastChecked<UTPAttributeSet>(attributeSet);

	//To do: Broadcast attribute values after defining attributes in set
	OnHealthChanged.Broadcast(tpAttributes->GetHealth());
	OnMaxHealthChanged.Broadcast(tpAttributes->GetMaxHealth());
}

void UOverlayWidgetController::BindCallbacksToDependencies()
{
	
}

void UOverlayWidgetController::HealthChanged(const FOnAttributeChangeData& data) const
{
	OnHealthChanged.Broadcast(data.NewValue);
}

void UOverlayWidgetController::MaxhHealthChanged(const FOnAttributeChangeData& data) const
{
	OnMaxHealthChanged.Broadcast(data.NewValue);
}
