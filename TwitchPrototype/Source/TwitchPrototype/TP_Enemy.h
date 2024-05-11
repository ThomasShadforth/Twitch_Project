// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TP_EnemyController.h"
#include "GameFramework/Character.h"
#include "TP_Enemy.generated.h"

class AAIController;
class ATP_EnemyController;

UCLASS()
class TWITCHPROTOTYPE_API ATP_Enemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATP_Enemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FORCEINLINE ATP_EnemyController* GetEnemyController() const {return enemyController;}
	FORCEINLINE void SetEnemyController(AController* controller) {enemyController = Cast<ATP_EnemyController>(controller);}
	
private:
	UPROPERTY(EditAnywhere, Category = "Behaviour Tree", meta = (AllowPrivateAccess = true))
	class UBehaviorTree* behaviourTree;
	
	ATP_EnemyController* enemyController;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	FORCEINLINE UBehaviorTree* GetBehaviourTree() const {return behaviourTree;}

	
	
};
