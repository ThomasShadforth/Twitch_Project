// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InputActionValue.h"
#include "EnhancedActionKeyMapping.h"
#include "TP_PlayerController.generated.h"

class USaveGame;
class UInputMappingContext;
class UInputAction;
class UUserWidget;

/**
 * 
 */
UCLASS()
class TWITCHPROTOTYPE_API ATP_PlayerController : public APlayerController
{
	GENERATED_BODY()

	ATP_PlayerController();
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* playerDefaultContext;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* moveAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* jumpAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* stopJumpAction;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* lookAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* sprintAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* stopSprintAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* stompAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* attackAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* stopAttackAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* pauseAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "TEST INPUTS", meta = (AllowPrivateAccess = "true"))
	UInputAction* testCollectibleAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "TEST INPUTS", meta = (AllowPrivateAccess = "true"))
	UInputAction* testSaveAction;
	
protected:
	virtual void BeginPlay() override;

	UFUNCTION()
	void PlayerMove(const FInputActionValue& Value);

	UFUNCTION()
	void PlayerLook(const FInputActionValue& Value);
	
	UFUNCTION()
	void PlayerJump();

	UFUNCTION()
	void StopPlayerJump();

	UFUNCTION()
	void PlayerStartSprint();

	UFUNCTION()
	void StopPlayerSprint();

	UFUNCTION()
	void PlayerStomp();

	UFUNCTION()
	void PlayerAttack();

	UFUNCTION()
	void StopHoldingPlayerAttack();

	UFUNCTION()
	void PauseTheGame();
	
	UFUNCTION(BlueprintImplementableEvent)
	void TestCollectibleTmaps();
	
	bool GetDoesImplementInterface();

	void HandleForwardInput(FVector ForwardDirection, float ForwardScale, APawn* ControlledPawn);
	
	virtual void SetupInputComponent() override;

	UFUNCTION()
	void TempSave();

	void SaveTheGame(FString slotName);

	void LoadTheGame(FString slotName);
	
public:
	
private:

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> pauseMenuClass;

	UPROPERTY()
	UUserWidget* pauseMenu;

	UPROPERTY(EditAnywhere)
	TSubclassOf<USaveGame> saveGameClass;

	UPROPERTY()
	USaveGame* saveGame;
	
public:

	
};
