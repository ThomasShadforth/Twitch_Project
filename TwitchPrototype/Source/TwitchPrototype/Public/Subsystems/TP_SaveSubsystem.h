// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "TP_SaveSubsystem.generated.h"

/**
 * 
 */

class UGameSaveData;
//class USaveGame;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSaveSubSystemSaveGameCreated, bool, bSuccess);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSaveSubSystemSaveGameLoaded, bool, bSuccess);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSaveSubSystemSaveGameSaveStarted, UGameSaveData*, SaveGame);



UCLASS()
class TWITCHPROTOTYPE_API UTP_SaveSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:

	UTP_SaveSubsystem();

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	UFUNCTION(BlueprintCallable, Category = "Save System")
	void CreateNewSaveData(FString slotName);

	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Save System")
	FSaveSubSystemSaveGameCreated SaveGameCreatedCompleted;
	
	UFUNCTION(BlueprintCallable, Category = "Save System")
	void LoadSaveGame(FString slotName);

	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Save System")
	FSaveSubSystemSaveGameLoaded SaveGameLoadCompleted;
	
	UFUNCTION(BlueprintCallable, Category = "Save System")
	void SaveGame(FString slotName);

	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Save System")
	FSaveSubSystemSaveGameSaveStarted SaveGameSaveStarted;
	
protected:

	UFUNCTION()
	void HandleCreateNewSaveCompleted(const FString& slotName, const int32 UserIndex, bool bSuccess);

	UFUNCTION()
	void HandleLoadSaveGameCompleted(const FString& slotName, const int32 UserIndex, USaveGame* LoadedGameData);
	
private:

public:

	UPROPERTY(BlueprintReadOnly, Category = "Save System")
	TObjectPtr<UGameSaveData> recentlyAccessedSave;
	
};
