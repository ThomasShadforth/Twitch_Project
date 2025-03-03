// Fill out your copyright notice in the Description page of Project Settings.


#include "Subsystems/TP_SaveSubsystem.h"

#include "Data/GameSaveData.h"
#include "Kismet/GameplayStatics.h"

UTP_SaveSubsystem::UTP_SaveSubsystem()
{
	
}

void UTP_SaveSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	UE_LOG(LogTemp, Warning, TEXT("SAVE SUBSYSTEM INITIALIZED"));
	
	Super::Initialize(Collection);
}

void UTP_SaveSubsystem::CreateNewSaveData(FString slotName)
{
	recentlyAccessedSave = Cast<UGameSaveData>(UGameplayStatics::CreateSaveGameObject(UGameSaveData::StaticClass()));

	if(recentlyAccessedSave)
	{
		recentlyAccessedSave->slotName = slotName;
		
		//
		FAsyncSaveGameToSlotDelegate savingDelegate;
		savingDelegate.BindUObject(this, &UTP_SaveSubsystem::HandleCreateNewSaveCompleted);
		UGameplayStatics::AsyncSaveGameToSlot(recentlyAccessedSave, slotName, 0, savingDelegate);
	} else
	{
		SaveGameCreatedCompleted.Broadcast(false);
	}
}

void UTP_SaveSubsystem::LoadSaveGame(FString slotName)
{
	
	if(UGameplayStatics::DoesSaveGameExist(slotName, 0))
	{
		//GEngine->AddOnScreenDebugMessage(0, 5.0f, FColor::Red, TEXT("SAVE GAME EXISTS!"));
		/*FAsyncLoadGameFromSlotDelegate loadingDelegate;
		loadingDelegate.BindUObject(this, &UTP_SaveSubsystem::HandleLoadSaveGameCompleted);
		UGameplayStatics::AsyncLoadGameFromSlot(slotName, 0, loadingDelegate);*/

		recentlyAccessedSave = Cast<UGameSaveData>(UGameplayStatics::LoadGameFromSlot(slotName, 0));
		if(recentlyAccessedSave)
		{
			UE_LOG(LogTemp, Warning, TEXT("SAVE EXISTS!!!"));
			SaveGameLoadCompleted.Broadcast(true);
		}
		
	} else
	{
		GEngine->AddOnScreenDebugMessage(0, 5.0f, FColor::Red, TEXT("S"));
		SaveGameLoadCompleted.Broadcast(false);
	}
}

void UTP_SaveSubsystem::SaveGame(FString slotName)
{
	UGameSaveData* gameData;

	if(UGameplayStatics::DoesSaveGameExist(slotName, 0))
	{
		gameData = Cast<UGameSaveData>(UGameplayStatics::LoadGameFromSlot(slotName, 0));
	}
	else
	{
		return;
	}

	if(gameData == nullptr) return;

	//To Do: Save Necessary Player Data;
	SaveGameSaveStarted.Broadcast(gameData);
	gameData->lastSavedLevel =  (FName)UGameplayStatics::GetCurrentLevelName(this);
	UGameplayStatics::SaveGameToSlot(gameData, slotName, 0);
	recentlyAccessedSave = gameData;
}

void UTP_SaveSubsystem::HandleCreateNewSaveCompleted(const FString& slotName, const int32 UserIndex, bool bSuccess)
{
	if(bSuccess)
	{
		//Broadcast to delegate stating save was successful
		SaveGameCreatedCompleted.Broadcast(true);
		
	} else
	{
		//Broadcast to delegate stating save was unsuccessful
		SaveGameCreatedCompleted.Broadcast(false);
	}
}

void UTP_SaveSubsystem::HandleLoadSaveGameCompleted(const FString& slotName, const int32 UserIndex,
	USaveGame* LoadedGameData)
{
	if(LoadedGameData == nullptr)
	{
		SaveGameLoadCompleted.Broadcast(false);
		return;
	}

	recentlyAccessedSave = Cast<UGameSaveData>(LoadedGameData);

	//Broadcast Successful Load of Game Save
	SaveGameLoadCompleted.Broadcast(true);
}
