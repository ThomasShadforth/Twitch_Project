// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CollectibleTypes.h"
#include "TP_CollectibleBase.generated.h"

UCLASS()
class TWITCHPROTOTYPE_API ATP_CollectibleBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATP_CollectibleBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void HideCollectible();
	
private:

	UPROPERTY(EditAnywhere)
	FString collectibleID;

	UPROPERTY(EditAnywhere)
	ECollectibleTypes collectibleType;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Collectible Properties", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* collectibleMesh;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FORCEINLINE FString GetCollectibleID() const {return collectibleID;}

	UFUNCTION(BlueprintImplementableEvent)
	void RevealCollectible();

	UFUNCTION(BlueprintCallable)
	FORCEINLINE ECollectibleTypes GetCollectibleType() const {return collectibleType;}

	UFUNCTION(BlueprintCallable)
	FORCEINLINE UStaticMeshComponent* GetCollectibleMesh() const {return collectibleMesh;}
	
};
