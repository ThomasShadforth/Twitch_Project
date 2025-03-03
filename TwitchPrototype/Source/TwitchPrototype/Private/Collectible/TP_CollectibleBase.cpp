// Fill out your copyright notice in the Description page of Project Settings.


#include "Collectible/TP_CollectibleBase.h"

// Sets default values
ATP_CollectibleBase::ATP_CollectibleBase() :
collectibleType(ECollectibleTypes::ECT_Primary)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	collectibleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Collectible Mesh"));
	SetRootComponent(collectibleMesh);
	
}

// Called when the game starts or when spawned
void ATP_CollectibleBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATP_CollectibleBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

