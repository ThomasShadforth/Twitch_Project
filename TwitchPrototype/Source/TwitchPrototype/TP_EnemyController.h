// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "TP_EnemyController.generated.h"

/**
 * 
 */
UCLASS()
class TWITCHPROTOTYPE_API ATP_EnemyController : public AAIController
{
	GENERATED_BODY()

public:
	ATP_EnemyController();

	void OnPossess(APawn* InPawn) override;

private:

	UPROPERTY(BlueprintReadWrite, Category = "AI Properties", meta = (AllowPrivateAccess = "true"))
	class UBlackboardComponent* blackboardComponent;

	UPROPERTY(BlueprintReadWrite, Category = "AI Properties", meta = (AllowPrivateAccess = "true"))
	class UBehaviorTreeComponent* behaviorTreeComp;
	
public:

	FORCEINLINE UBlackboardComponent* GetBlackboardComp() const {return blackboardComponent;}
	FORCEINLINE UBehaviorTreeComponent* GetBehaviourTreeComp() const {return behaviorTreeComp;}
	
};
