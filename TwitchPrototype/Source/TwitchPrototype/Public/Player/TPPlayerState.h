// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h"
#include "TPLivesInterface.h"
#include "Interaction/TPCollectibleInterface.h"
#include "TPPlayerState.generated.h"


class UAbilitySystemComponent;
class UAttributeSet;
class ATP_CollectibleBase;
class UGameSaveData;

/**
 * 
 */
UCLASS()
class TWITCHPROTOTYPE_API ATPPlayerState : public APlayerState, public IAbilitySystemInterface, public ITPCollectibleInterface, public ITPLivesInterface
{
	GENERATED_BODY()

public:

	ATPPlayerState();

	virtual void BeginPlay() override;
	
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	virtual void CollectedCollectible_Implementation(ATP_CollectibleBase* Collectible) override;

	virtual void TestCollectedCollectible_Implementation() override;

	virtual void SetCurrentLives_Implementation(int32 lifeAmount) override;

	virtual void PostInitializeComponents() override;
	
protected:

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UAbilitySystemComponent> abilitySystemComp;

	UPROPERTY()
	TObjectPtr<UAttributeSet> attributeSet;

	UFUNCTION()
	void OnSaveStarted(UGameSaveData* SaveGame);

	UFUNCTION()
	void OnSaveGameLoaded(bool bSuccess);
	
private:

	UPROPERTY(EditDefaultsOnly)
	int32 livesCount;

	//To do: Go into attribute set and add hit points
	
	UPROPERTY(VisibleAnywhere)
	int32 cheeseCount;

	UPROPERTY(VisibleAnywhere)
	int32 fruitCount;

	UPROPERTY(VisibleAnywhere)
	TMap<FString, ATP_CollectibleBase*> fruitMap;

	UPROPERTY(VisibleAnywhere)
	TMap<FString, ATP_CollectibleBase*> cheeseMap;

	void AddCollectibleToMap(ATP_CollectibleBase* Collectible);
	
public:

	FORCEINLINE UAttributeSet* GetAttributeSet() const {return attributeSet;}

	void LoadCollectibleMap(TMap<FString, ATP_CollectibleBase*> collectibleMapToLoad, bool isCheese);

	FORCEINLINE TMap<FString, ATP_CollectibleBase*> GetCheeseMap() const {return cheeseMap;}
	FORCEINLINE TMap<FString, ATP_CollectibleBase*> GetFruitMap() const {return fruitMap;}

	
	
};
