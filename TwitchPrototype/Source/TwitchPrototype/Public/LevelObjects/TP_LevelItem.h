// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TP_LevelItem.generated.h"

UCLASS()
class TWITCHPROTOTYPE_API ATP_LevelItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATP_LevelItem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Item Properties", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* itemMesh;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
