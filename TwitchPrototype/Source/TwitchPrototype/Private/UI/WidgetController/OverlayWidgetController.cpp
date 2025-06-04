// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/WidgetController/OverlayWidgetController.h"
#include "AbilitySystem/TPAttributeSet.h"
#include "Player/TPPlayerState.h"

void UOverlayWidgetController::BroadcastInitialValues()
{
	UTPAttributeSet* tpAttributes = CastChecked<UTPAttributeSet>(attributeSet);

	//To do: Broadcast attribute values after defining attributes in set
	OnHealthChanged.Broadcast(tpAttributes->GetHealth());
	OnMaxHealthChanged.Broadcast(tpAttributes->GetMaxHealth());

	OnFruitCollected.Broadcast(0);
	OnCheeseCollected.Broadcast(0);

	if(ATPPlayerState* tpPlayerState = CastChecked<ATPPlayerState>(GetWorld()->GetFirstPlayerController()->GetPawn()->GetPlayerState()))
	{
		OnLivesChanged.Broadcast(tpPlayerState->GetLifeCount());
	}
}

void UOverlayWidgetController::BindCallbacksToDependencies()
{
	UTPAttributeSet* tpAttributes = CastChecked<UTPAttributeSet>(attributeSet);
	abilitySystemComponent->GetGameplayAttributeValueChangeDelegate(tpAttributes->GetHealthAttribute()).AddLambda(
		[this](const FOnAttributeChangeData& Data)
		{
			OnHealthChanged.Broadcast(Data.NewValue);
		}
	);

	ATPPlayerState* tpPlayerState = CastChecked<ATPPlayerState>(GetWorld()->GetFirstPlayerController()->GetPawn()->GetPlayerState());

	tpPlayerState->OnFruitCollected.AddLambda(
		[this](const int32& FruitCount)
		{
			OnFruitCollected.Broadcast(FruitCount);
		});

	tpPlayerState->OnCheeseCollected.AddLambda([this](const int32& CheeseCount)
	{
		OnCheeseCollected.Broadcast(CheeseCount);
	});

	tpPlayerState->OnLivesChanged.AddLambda([this](const int32& LifeCount)
	{
		OnLivesChanged.Broadcast(LifeCount);
	});
}

void UOverlayWidgetController::HealthChanged(const FOnAttributeChangeData& data) const
{
	OnHealthChanged.Broadcast(data.NewValue);
}

void UOverlayWidgetController::MaxhHealthChanged(const FOnAttributeChangeData& data) const
{
	OnMaxHealthChanged.Broadcast(data.NewValue);
}
