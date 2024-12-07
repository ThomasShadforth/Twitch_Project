// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/HUD/TPHUD.h"

#include "Components/Overlay.h"
#include "UI/Widget/TPWidgetBase.h"
#include "UI/WidgetController/OverlayWidgetController.h"

UOverlayWidgetController* ATPHUD::GetOverlayWidgetController(const FWidgetControllerParams& wcParams)
{
	if(overlayWidgetController == nullptr)
	{
		overlayWidgetController = NewObject<UOverlayWidgetController>(this, overlayWidgetControllerClass);
		overlayWidgetController->SetWidgetControllerParams(wcParams);
		overlayWidgetController->BindCallbacksToDependencies();

		return overlayWidgetController;
	}
	
	return overlayWidgetController;
}

void ATPHUD::InitOverlay(APlayerController* pc, APlayerState* ps, UAbilitySystemComponent* asc, UAttributeSet* as)
{
	checkf(overlayWidgetClass, TEXT("Overlay Widget Class Uninitialised, please populate BP_TPHUD"));
	checkf(overlayWidgetControllerClass, TEXT("Overlay Widget Controlled Class Uninitialised, please populate BP_TPHUD"));

	UUserWidget* widget = CreateWidget<UUserWidget>(GetWorld(), overlayWidgetClass);
	overlayWidget = Cast<UTPWidgetBase>(widget);

	const FWidgetControllerParams widgetControllerParams(pc, ps, asc, as);
	UOverlayWidgetController* owc = GetOverlayWidgetController(widgetControllerParams);

	overlayWidget->SetWidgetController(overlayWidgetController);
	overlayWidgetController->BroadcastInitialValues();

	widget->AddToViewport();
}
