// Fill out your copyright notice in the Description page of Project Settings.


#include "TP_PlayerController.h"

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "GameFramework/Character.h"
#include "GameFramework/PlayerState.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Player/PlayerCharacterInterface.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Blueprint/UserWidget.h"
#include "Data/GameSaveData.h"
#include "Kismet/GameplayStatics.h"
#include "Player/TPPlayerState.h"
#include "Subsystems/TP_SaveSubsystem.h"

ATP_PlayerController::ATP_PlayerController()
{
	
}

void ATP_PlayerController::BeginPlay()
{
	if(pauseMenuClass)
	{
		pauseMenu = CreateWidget<UUserWidget>(this, pauseMenuClass);
	}

	
	if(UEnhancedInputLocalPlayerSubsystem* subSystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		subSystem->AddMappingContext(playerDefaultContext, 0);
	}

	LoadTheGame("SlotOne");
	
}



bool ATP_PlayerController::GetDoesImplementInterface()
{
	
	if(ACharacter* controlledPawn = GetPawn<ACharacter>())
	{
		return UKismetSystemLibrary::DoesImplementInterface(controlledPawn, UPlayerCharacterInterface::StaticClass());
	}
	
	return false;
}

void ATP_PlayerController::HandleForwardInput(FVector ForwardDirection, float ForwardScale, APawn* ControlledPawn)
{
	if(GetDoesImplementInterface())
	{
		if(IPlayerCharacterInterface::Execute_GetIsOnLadder(ControlledPawn))
		{
			//To DO: Adjust so that when pressing back, if player is on ground, set move mode back to normal
			if(ForwardScale < 0.f && IPlayerCharacterInterface::Execute_GetIsOnGround(ControlledPawn))
			{
				IPlayerCharacterInterface::Execute_GetPlayerMovementComponent(ControlledPawn)->SetMovementMode(MOVE_Walking);
				ControlledPawn->AddMovementInput(ForwardDirection, ForwardScale);
			} else
			{
				IPlayerCharacterInterface::Execute_GetPlayerMovementComponent(ControlledPawn)->SetMovementMode(MOVE_Flying);
				FVector upDirection = ControlledPawn->GetActorUpVector();
				ControlledPawn->AddMovementInput(upDirection, ForwardScale);
			}
		} else
		{
			ControlledPawn->AddMovementInput(ForwardDirection, ForwardScale);
		}
	}
}

void ATP_PlayerController::PlayerMove(const FInputActionValue& Value)
{
	if(!GetDoesImplementInterface()) return;

	if(IPlayerCharacterInterface::Execute_GetPlayerMoveDisabled(GetPawn())) return;

	FVector2D moveValue = Value.Get<FVector2D>();

	const FRotator rotation = GetControlRotation();
	const FRotator yawRotation = FRotator(0, rotation.Yaw, 0);

	const FVector forwardDirection = FRotationMatrix(yawRotation).GetUnitAxis(EAxis::X);
	const FVector rightDirection = FRotationMatrix(yawRotation).GetUnitAxis(EAxis::Y);

	if(APawn* controlledPawn = GetPawn<APawn>())
	{
		HandleForwardInput(forwardDirection, moveValue.Y, controlledPawn);
		controlledPawn->AddMovementInput(rightDirection, moveValue.X);
	}

	if(!IPlayerCharacterInterface::Execute_GetWallSlideCheckEnabled(GetPawn()))
	{
		UE_LOG(LogTemp, Warning, TEXT("ENABLING WALL SLIDE CHECK"));
		IPlayerCharacterInterface::Execute_PlayerEnableWallSlideCheck(GetPawn(), true);
	}
}

void ATP_PlayerController::PlayerStopMove(const FInputActionValue& Value)
{
	if(!GetDoesImplementInterface()) return;

	UE_LOG(LogTemp, Warning, TEXT("STOP MOVE ACTION TRIGGERED"));
	
	IPlayerCharacterInterface::Execute_PlayerEnableWallSlideCheck(GetPawn(), false);
}

void ATP_PlayerController::PlayerLook(const FInputActionValue& Value)
{
	FVector2D lookAxisVector = Value.Get<FVector2D>();

	AddPitchInput(lookAxisVector.Y);
	AddYawInput(lookAxisVector.X);
}

void ATP_PlayerController::PlayerJump()
{
	if(!GetDoesImplementInterface()) return;

	if(IPlayerCharacterInterface::Execute_GetPlayerMoveDisabled(GetPawn())) return;

	IPlayerCharacterInterface::Execute_PlayerJump(GetPawn());
}

void ATP_PlayerController::StopPlayerJump()
{
	if(!GetDoesImplementInterface()) return;

	IPlayerCharacterInterface::Execute_PlayerStopJump(GetPawn());
}

void ATP_PlayerController::PlayerStartSprint()
{
	if(!GetDoesImplementInterface()) return;

	IPlayerCharacterInterface::Execute_PlayerSprint(GetPawn());
}

void ATP_PlayerController::StopPlayerSprint()
{
	if(!GetDoesImplementInterface()) return;

	IPlayerCharacterInterface::Execute_PlayerStopSprint(GetPawn());
}

void ATP_PlayerController::PlayerStomp()
{
	if(!GetDoesImplementInterface()) return;

	//If the player is grounded, instead trigger the interact
	if(!IPlayerCharacterInterface::Execute_GetIsOnGround(GetPawn()))
	{
		IPlayerCharacterInterface::Execute_PlayerStomp(GetPawn());
	} else
	{
		IPlayerCharacterInterface::Execute_PlayerInteract(GetPawn());
	}
}

void ATP_PlayerController::PlayerAttack()
{
	if(!GetDoesImplementInterface()) return;

	IPlayerCharacterInterface::Execute_StartPlayerAttack(GetPawn());
}

void ATP_PlayerController::StopHoldingPlayerAttack()
{
	if(!GetDoesImplementInterface()) return;

	IPlayerCharacterInterface::Execute_StopHoldingPlayerAttack(GetPawn());
}

void ATP_PlayerController::PauseTheGame()
{
	if(pauseMenu)
	{
		pauseMenu->AddToViewport(-1000);

		UWidgetBlueprintLibrary::SetInputMode_UIOnlyEx(this, pauseMenu, EMouseLockMode::DoNotLock, false);
		bShowMouseCursor = true;

		SetPause(true);
	}
}

void ATP_PlayerController::TempSave()
{
	//SaveTheGame(TEXT("SlotOne"));

	UTP_SaveSubsystem* saveSubsystem = GetGameInstance()->GetSubsystem<UTP_SaveSubsystem>();

	if(saveSubsystem)
	{
		UE_LOG(LogTemp, Warning, TEXT("SUBSYSTEM FOUND. SAVING"));

		if(saveSubsystem->recentlyAccessedSave == nullptr) return;
		
		
		saveSubsystem->SaveGame(saveSubsystem->recentlyAccessedSave->slotName);
	}
}

void ATP_PlayerController::SaveTheGame(FString slotName)
{
	if(UGameplayStatics::DoesSaveGameExist(slotName, 0))
	{
		
		//GEngine->AddOnScreenDebugMessage(0, 2.f, FColor::Red, FString::Printf(TEXT("OVERWRITING GAME DATA")));
		saveGame = UGameplayStatics::LoadGameFromSlot(slotName, 0);
	} else
	{
		//GEngine->AddOnScreenDebugMessage(0, 2.f, FColor::Red, FString::Printf(TEXT("SAVING GAME DATA")));
		saveGame = UGameplayStatics::CreateSaveGameObject(saveGameClass);
	}

	UGameSaveData* gameSave = Cast<UGameSaveData>(saveGame);

	if(gameSave == nullptr){
		//UE_LOG(LogTemp, Warning, TEXT("DOES NOT MATCH SAVE DATA TYPE"))
		return;
	}
	
	gameSave->playerState = PlayerState;

	ATPPlayerState* tpPlayerState = Cast<ATPPlayerState>(GetPawn()->GetPlayerState());

	if(tpPlayerState == nullptr)
	{
		//UE_LOG(LogTemp, Warning, TEXT("PLAYER STATE NOT FOUND"));
		return;
	} 

	gameSave->cheeseMap = tpPlayerState->GetCheeseMap();
	gameSave->fruitMap = tpPlayerState->GetFruitMap();

	gameSave->lastSavedLevel = (FName)UGameplayStatics::GetCurrentLevelName(this);
	//gameSave->lastLevelName = UGameplayStatics::GetCurrentLevelName(this);

	//UE_LOG(LogTemp, Warning, TEXT("FINALIZING SAVE!"));
	
	UGameplayStatics::SaveGameToSlot(saveGame, slotName, 0);
}

void ATP_PlayerController::LoadTheGame(FString slotName)
{
	if(UGameplayStatics::DoesSaveGameExist(slotName, 0))
	{
		USaveGame* loadedSave = UGameplayStatics::LoadGameFromSlot(slotName, 0);

		UGameSaveData* gameSave = Cast<UGameSaveData>(loadedSave);

		if(gameSave == nullptr) return;

		PlayerState = gameSave->playerState;

		ATPPlayerState* tpPlayerState = Cast<ATPPlayerState>(PlayerState);

		if(tpPlayerState == nullptr) return;

		tpPlayerState->LoadCollectibleMap(gameSave->cheeseMap, true);
		tpPlayerState->LoadCollectibleMap(gameSave->fruitMap, false);
	}
}

void ATP_PlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	UEnhancedInputComponent* enhancedInput = CastChecked<UEnhancedInputComponent>(InputComponent);

	enhancedInput->BindAction(moveAction, ETriggerEvent::Triggered, this, &ATP_PlayerController::PlayerMove);
	enhancedInput->BindAction(stopMoveAction, ETriggerEvent::Triggered, this, &ATP_PlayerController::PlayerStopMove);
	
	enhancedInput->BindAction(jumpAction, ETriggerEvent::Triggered, this, &ATP_PlayerController::PlayerJump);
	enhancedInput->BindAction(stopJumpAction, ETriggerEvent::Triggered, this, &ATP_PlayerController::StopPlayerJump);

	enhancedInput->BindAction(lookAction, ETriggerEvent::Triggered, this, &ATP_PlayerController::PlayerLook);

	enhancedInput->BindAction(sprintAction, ETriggerEvent::Triggered, this, &ATP_PlayerController::PlayerStartSprint);
	enhancedInput->BindAction(stopSprintAction, ETriggerEvent::Triggered, this, &ATP_PlayerController::StopPlayerSprint);

	enhancedInput->BindAction(stompAction, ETriggerEvent::Triggered, this, &ATP_PlayerController::PlayerStomp);

	enhancedInput->BindAction(attackAction, ETriggerEvent::Triggered, this, &ATP_PlayerController::PlayerAttack);
	enhancedInput->BindAction(stopAttackAction, ETriggerEvent::Triggered, this, &ATP_PlayerController::StopHoldingPlayerAttack);

	enhancedInput->BindAction(pauseAction, ETriggerEvent::Triggered, this, &ATP_PlayerController::PauseTheGame);

	enhancedInput->BindAction(testCollectibleAction, ETriggerEvent::Triggered, this, &ATP_PlayerController::TestCollectibleTmaps);

	enhancedInput->BindAction(testSaveAction, ETriggerEvent::Triggered, this, &ATP_PlayerController::TempSave);
	
}
