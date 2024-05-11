// Fill out your copyright notice in the Description page of Project Settings.


#include "RotationComponent.h"

// Sets default values for this component's properties
URotationComponent::URotationComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void URotationComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	owningActor = GetOwner();
}

void URotationComponent::RotateObject(float DeltaTime)
{
	if(!owningActor) return;

	FRotator rotationToAdd{rotationSpeed.X, rotationSpeed.Y, rotationSpeed.Z};
	
	GetOwner()->AddActorWorldRotation(rotationToAdd * DeltaTime);
}


// Called every frame
void URotationComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	RotateObject(DeltaTime);
}

