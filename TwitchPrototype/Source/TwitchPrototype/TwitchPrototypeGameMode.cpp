// Copyright Epic Games, Inc. All Rights Reserved.

#include "TwitchPrototypeGameMode.h"
#include "TwitchPrototypeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATwitchPrototypeGameMode::ATwitchPrototypeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
