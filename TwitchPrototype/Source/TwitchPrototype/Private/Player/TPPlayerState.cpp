// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/TPPlayerState.h"
#include "CollectibleTypes.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystem/TPAttributeSet.h"
#include "Collectible/TP_CollectibleBase.h"
#include "Data/GameSaveData.h"
#include "Subsystems/TP_SaveSubsystem.h"

ATPPlayerState::ATPPlayerState()
{
	NetUpdateFrequency = 100.f;
	
	abilitySystemComp = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("Ability System Component"));
	abilitySystemComp->SetIsReplicated(true);
	abilitySystemComp->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	attributeSet = CreateDefaultSubobject<UTPAttributeSet>(TEXT("Attribute Set"));
}

void ATPPlayerState::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	UTP_SaveSubsystem* SaveSubsystem = GetGameInstance()->GetSubsystem<UTP_SaveSubsystem>();

	if(SaveSubsystem)
	{
		SaveSubsystem->SaveGameSaveStarted.AddDynamic(this, &ATPPlayerState::OnSaveStarted);
		SaveSubsystem->SaveGameLoadCompleted.AddDynamic(this, &ATPPlayerState::OnSaveGameLoaded);
	}
}

void ATPPlayerState::BeginPlay()
{
	Super::BeginPlay();
}

void ATPPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

UAbilitySystemComponent* ATPPlayerState::GetAbilitySystemComponent() const
{
	return abilitySystemComp;
}

void ATPPlayerState::OnSaveStarted(UGameSaveData* SaveGame)
{
	UE_LOG(LogTemp, Warning, TEXT("SAVING GAME STARTED!!"));

	SaveGame->cheeseMap = cheeseMap;
	SaveGame->fruitMap = fruitMap;
}

void ATPPlayerState::OnSaveGameLoaded(bool bSuccess)
{
	UE_LOG(LogTemp, Warning, TEXT("DATA LOADED"));

	UTP_SaveSubsystem* SaveSubsystem = GetGameInstance()->GetSubsystem<UTP_SaveSubsystem>();

	if(SaveSubsystem)
	{
		
		LoadCollectibleMap(SaveSubsystem->recentlyAccessedSave->fruitMap, false);
		LoadCollectibleMap(SaveSubsystem->recentlyAccessedSave->cheeseMap, true);
	}
}

void ATPPlayerState::CollectedCollectible_Implementation(ATP_CollectibleBase* Collectible)
{
	//UE_LOG(LogTemp, Warning, TEXT("COLLECTING COLLECTIBLE"));
	AddCollectibleToMap(Collectible);
}


void ATPPlayerState::TestCollectedCollectible_Implementation()
{
	if(fruitMap.Contains(FString("TempObj1")))
	{
		ATP_CollectibleBase* collectible = *fruitMap.Find(FString("TempObj1"));
		collectible->RevealCollectible();
		fruitMap.Remove(FString("TempObj1"));
	} else
	{
		UE_LOG(LogTemp, Warning, TEXT("OBJECT DOESNT EXIST!!"));
	}
}

void ATPPlayerState::SetCurrentLives_Implementation(int32 lifeAmount)
{	
	livesCount += lifeAmount;	
}

void ATPPlayerState::AddCollectibleToMap(ATP_CollectibleBase* Collectible)
{
	if(Collectible == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("COLLECTIBLE IS NULL"));
		return;
	}
	
	//UE_LOG(LogTemp, Warning, TEXT("COLLECTED COLLECTIBLE"));

	const FString collectibleObjectID = Collectible->GetCollectibleID();

	if(Collectible->GetCollectibleType() == ECollectibleTypes::ECT_Primary)
	{
		if(cheeseMap.Contains(collectibleObjectID))
		{
			UE_LOG(LogTemp, Warning, TEXT("COLLECTIBLE ALREADY EXISTS IN TMAP"));
		} else
		{
			cheeseMap.Add(collectibleObjectID, Collectible);
			cheeseCount++;
		}
	} else if(Collectible->GetCollectibleType() == ECollectibleTypes::ECT_Secondary)
	{
		if(fruitMap.Contains(collectibleObjectID))
		{
			UE_LOG(LogTemp, Warning, TEXT("COLLECTIBLE ALREADY EXISTS IN TMAP"));
		} else
		{
			fruitMap.Add(collectibleObjectID, Collectible);
			fruitCount++;
		}
	}
	
}

void ATPPlayerState::LoadCollectibleMap(TMap<FString, ATP_CollectibleBase*> collectibleMapToLoad, bool isCheese)
{
	UE_LOG(LogTemp, Warning, TEXT("LOADING COLLECTIBLE MAP DATA"));

	int collectibleCount = collectibleMapToLoad.Num();
	
	UE_LOG(LogTemp, Warning, TEXT("Number of Collectibles: %i"), collectibleCount);
	
	for(auto elem : collectibleMapToLoad)
	{
		if(isCheese)
		{
			cheeseMap.Add(elem);
			cheeseCount++;
		} else
		{
			fruitMap.Add(elem);
			fruitCount++;
		}
	}
}
