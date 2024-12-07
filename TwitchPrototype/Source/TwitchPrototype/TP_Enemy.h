// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TPEnemyInterface.h"
#include "TP_EnemyController.h"
#include "GameFramework/Character.h"
#include "TP_Enemy.generated.h"

class AAIController;
class ATP_EnemyController;

class ATP_BaseProjectile;

UCLASS()
class TWITCHPROTOTYPE_API ATP_Enemy : public ACharacter, public ITPEnemyInterface
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
	
	UPROPERTY(EditAnywhere)
	USceneComponent* projectileFirePoint;

	UPROPERTY(EditAnywhere)
	TSubclassOf<ATP_BaseProjectile> enemyProjectileClass;
	
	ATP_EnemyController* enemyController;

	UPROPERTY(EditAnywhere)
	AAIPatrolPath* enemyPatrolPath;

	UPROPERTY(EditAnywhere)
	bool bActivateAIPerception;

	bool bIsRetreating;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	FORCEINLINE UBehaviorTree* GetBehaviourTree() const {return behaviourTree;}

	UFUNCTION(BlueprintCallable)
	FORCEINLINE AAIPatrolPath* GetEnemyPatrolPath() const {return enemyPatrolPath;}

	UFUNCTION(BlueprintCallable)
	FORCEINLINE void FinishRetreating() {bIsRetreating = false;}
	
	virtual AAIPatrolPath* GetPatrolRoute_Implementation() override;

	virtual void SetMoveSpeed_Implementation(EMoveSpeedTypes speedType) override;

	virtual bool GetShouldActivatePerception_Implementation() override;

	virtual USceneComponent* GetProjectileFirePoint_Implementation() override;

	virtual TSubclassOf<ATP_BaseProjectile> GetEnemyProjectileClass_Implementation() override;

	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser);

	virtual void DamageEnemy_Implementation() override;
	
	UFUNCTION(BlueprintCallable)
	void SetStateAsPassive();

	UFUNCTION(BlueprintCallable)
	void SetStateAsAttack(AActor* attackTarget);

	UFUNCTION(BlueprintCallable)
	void SetStateAsCower(AActor* playerTarget);

	UFUNCTION(BlueprintCallable)
	void SetStateAsRetreat();
	
};
