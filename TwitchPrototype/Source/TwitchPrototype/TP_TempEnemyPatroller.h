// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TP_Enemy.h"
#include "TP_TempEnemyPatroller.generated.h"

/**
 * 
 */
UCLASS()
class TWITCHPROTOTYPE_API ATP_TempEnemyPatroller : public ATP_Enemy
{
	GENERATED_BODY()

public:

	ATP_TempEnemyPatroller();

	
	
protected:

	virtual void BeginPlay() override;

	UFUNCTION()
	void AggroSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void AggroSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	
private:

	UPROPERTY(EditAnywhere, Category = "Behaviour Tree", meta = (AllowPrivateAccess = "true", MakeEditWidget = "true"))
	FVector patrolPoint1;

	UPROPERTY(EditAnywhere, Category = "Behaviour Tree", meta = (AllowPrivateAccess = "true", MakeEditWidget = "true"))
	FVector patrolPoint2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Behaviour Tree", meta = (AllowPrivateAccess = "true"))
	class USphereComponent* aggroSphere;
	
public:

	virtual void Tick(float DeltaTime) override;
	
};
