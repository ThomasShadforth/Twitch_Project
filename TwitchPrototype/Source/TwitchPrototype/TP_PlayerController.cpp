// Fill out your copyright notice in the Description page of Project Settings.


#include "TP_PlayerController.h"

#include "EnhancedInputComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Player/PlayerCharacterInterface.h"

ATP_PlayerController::ATP_PlayerController()
{
	
}

void ATP_PlayerController::BeginPlay()
{
	
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
			IPlayerCharacterInterface::Execute_GetPlayerMovementComponent(ControlledPawn)->SetMovementMode(MOVE_Flying);
			FVector upDirection = ControlledPawn->GetActorUpVector();
			ControlledPawn->AddMovementInput(upDirection, ForwardScale);
			
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

	IPlayerCharacterInterface::Execute_PlayerStomp(GetPawn());
}

void ATP_PlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	UEnhancedInputComponent* enhancedInput = CastChecked<UEnhancedInputComponent>(InputComponent);

	enhancedInput->BindAction(moveAction, ETriggerEvent::Triggered, this, &ATP_PlayerController::PlayerMove);

	enhancedInput->BindAction(jumpAction, ETriggerEvent::Triggered, this, &ATP_PlayerController::PlayerJump);
	enhancedInput->BindAction(stopJumpAction, ETriggerEvent::Triggered, this, &ATP_PlayerController::StopPlayerJump);

	enhancedInput->BindAction(lookAction, ETriggerEvent::Triggered, this, &ATP_PlayerController::PlayerLook);

	enhancedInput->BindAction(sprintAction, ETriggerEvent::Triggered, this, &ATP_PlayerController::PlayerStartSprint);
	enhancedInput->BindAction(stopSprintAction, ETriggerEvent::Triggered, this, &ATP_PlayerController::StopPlayerSprint);

	enhancedInput->BindAction(stompAction, ETriggerEvent::Triggered, this, &ATP_PlayerController::PlayerStomp);
	
}



