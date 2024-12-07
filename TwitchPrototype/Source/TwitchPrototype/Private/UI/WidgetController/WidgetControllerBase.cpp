// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/WidgetController/WidgetControllerBase.h"

void UWidgetControllerBase::SetWidgetControllerParams(const FWidgetControllerParams& wcParms)
{
	playerController = wcParms.playerController;
	playerState = wcParms.playerState;
	abilitySystemComponent = wcParms.abilitySystemComponent;
	attributeSet = wcParms.attributeSet;
}

void UWidgetControllerBase::BroadcastInitialValues()
{
}

void UWidgetControllerBase::BindCallbacksToDependencies()
{
}
