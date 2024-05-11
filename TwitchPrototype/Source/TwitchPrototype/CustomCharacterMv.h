// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "CustomCharacterMv.generated.h"

/**
 * 
 */
UCLASS()
class TWITCHPROTOTYPE_API UCustomCharacterMv : public UCharacterMovementComponent
{
	GENERATED_BODY()

	UCustomCharacterMv();
	
protected:
	virtual void BeginPlay() override;

	void SetGravityScale();
	
public:

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
private:

	class ATP_PlayerCharacter* ownerCharacter;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float jumpingGravityScale;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float fallingGravityScale;
	
public:

	
};
