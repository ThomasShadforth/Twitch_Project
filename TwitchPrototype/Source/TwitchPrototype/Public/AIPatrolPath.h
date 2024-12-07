// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AIPatrolPath.generated.h"


class USplineComponent;

UCLASS()
class TWITCHPROTOTYPE_API AAIPatrolPath : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAIPatrolPath();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

	UPROPERTY(EditAnywhere, meta=(ClampMin = "-1", ClampMax = "1"))
	int direction;
	
	int patrolPointIndex;

	UPROPERTY(EditAnywhere)
	USplineComponent* patrolRoute;
	
	UPROPERTY(EditAnywhere)
	bool bWillLoop;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void IncrementPatrolIndex();

	UFUNCTION(BlueprintCallable)
	bool IncrementRetreatIndex();
	
	UFUNCTION(BlueprintCallable)
	FVector GetSplinePointAsWorldPosition();
	
};
