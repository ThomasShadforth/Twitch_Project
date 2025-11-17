// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TPDialogBoxWidget.generated.h"

/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnExitSignature);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSpeakFinishedSignature);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReplyFinishedSignature, int32, SelectedReplyOption);

UCLASS()
class TWITCHPROTOTYPE_API UTPDialogBoxWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, BlueprintCallable, BlueprintAssignable)
	FOnExitSignature onExit;

	UPROPERTY(BlueprintReadWrite, BlueprintCallable, BlueprintAssignable)
	FOnSpeakFinishedSignature onSpeakFinished;

	UPROPERTY(BlueprintReadWrite, BlueprintCallable, BlueprintAssignable)
	FOnReplyFinishedSignature onReplyFinished;

protected:

private:

public:
	
};
