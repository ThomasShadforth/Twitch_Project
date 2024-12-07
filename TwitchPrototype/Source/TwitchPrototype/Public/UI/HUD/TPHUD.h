// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UnrealWidget.h"
#include "GameFramework/HUD.h"
#include "TPHUD.generated.h"


class UAttributeSet;
class UAbilitySystemComponent;
struct FWidgetControllerParams;
class UOverlayWidgetController;
class UTPWidgetBase;

/**
 * 
 */
UCLASS()
class TWITCHPROTOTYPE_API ATPHUD : public AHUD
{
	GENERATED_BODY()

public:

	UPROPERTY()
	TObjectPtr<UTPWidgetBase> overlayWidget;

	UOverlayWidgetController* GetOverlayWidgetController(const FWidgetControllerParams& wcParams);
	
	void InitOverlay(APlayerController* pc, APlayerState* ps, UAbilitySystemComponent* asc, UAttributeSet* as);
	
protected:

private:

	UPROPERTY(EditAnywhere)
	TSubclassOf<UTPWidgetBase> overlayWidgetClass;

	UPROPERTY()
	TObjectPtr<UOverlayWidgetController> overlayWidgetController;

	UPROPERTY()
	TSubclassOf<UOverlayWidgetController> overlayWidgetControllerClass;
	
public:
	
};
