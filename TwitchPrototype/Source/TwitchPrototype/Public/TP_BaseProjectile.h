// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TP_BaseProjectile.generated.h"

class UProjectileMovementComponent;
class UGameplayEffect;

UCLASS()
class TWITCHPROTOTYPE_API ATP_BaseProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATP_BaseProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UGameplayEffect> DamageGameplayEffect;

	UFUNCTION(BlueprintCallable)
	void ApplyGameplayEffectToTarget(AActor* TargetActor, TSubclassOf<UGameplayEffect> GameplayEffectClass);
	
private:

	
	
	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	AActor* owningActor;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UProjectileMovementComponent* projectileMovement;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float knockbackModifier;
	
	UPROPERTY(EditAnywhere)
	float projectileSpeed;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

    UFUNCTION(BlueprintCallable)
	FORCEINLINE void SetOwningActor(AActor* ownerActor) {owningActor = ownerActor;}
	
	UFUNCTION(BlueprintCallable)
	FORCEINLINE float GetProjectileSpeed() const {return projectileSpeed;}

	UFUNCTION()
	FORCEINLINE UProjectileMovementComponent* GetProjectileMovement() const {return projectileMovement;}
};
