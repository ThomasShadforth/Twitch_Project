// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TPWidgetBase.generated.h"

/**
 * 
 */
UCLASS()
class TWITCHPROTOTYPE_API UTPWidgetBase : public UUserWidget
{
	GENERATED_BODY()

public:

	//Generic UObject Reference for Widget Controller
	TObjectPtr<UObject> widgetController;
	
protected:

	UFUNCTION(BlueprintImplementableEvent)
	void WidgetControllerSet();
	
private:

public:

	UFUNCTION(BlueprintCallable)
	void SetWidgetController(UObject* InController);
	
};
