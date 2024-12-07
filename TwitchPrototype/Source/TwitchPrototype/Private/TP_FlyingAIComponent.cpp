// Fill out your copyright notice in the Description page of Project Settings.


#include "TP_FlyingAIComponent.h"

#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values for this component's properties
UTP_FlyingAIComponent::UTP_FlyingAIComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTP_FlyingAIComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
	if(ACharacter* owner = Cast<ACharacter>(GetOwner()))
	{
		owner->GetCharacterMovement()->GravityScale = 0.0f;
		//owner->GetCharacterMovement()->SetMovementMode(MOVE_Flying);
	}
	
}


// Called every frame
void UTP_FlyingAIComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

