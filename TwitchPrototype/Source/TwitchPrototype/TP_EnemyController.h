// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Perception/AIPerceptionTypes.h"
#include "TP_EnemyController.generated.h"

/**
 * 
 */

class UAIPerceptionComponent;
class UAISenseConfig_Sight;
class UAISenseConfig;

UCLASS()
class TWITCHPROTOTYPE_API ATP_EnemyController : public AAIController
{
	GENERATED_BODY()

public:
	ATP_EnemyController();

	void OnPossess(APawn* InPawn) override;

protected:

	virtual void BeginPlay() override;

	UFUNCTION(BlueprintImplementableEvent)
	void DetectedTarget(AActor* Actor, FAIStimulus Stimulus);
	
private:

	UPROPERTY(BlueprintReadWrite, Category = "AI Properties", meta = (AllowPrivateAccess = "true"))
	class UBlackboardComponent* blackboardComponent;

	UPROPERTY(BlueprintReadWrite, Category = "AI Properties", meta = (AllowPrivateAccess = "true"))
	class UBehaviorTreeComponent* behaviorTreeComp;

	UPROPERTY(EditAnywhere)
	UAIPerceptionComponent* aiPerception;

	UAISenseConfig_Sight* sightConfig;
	
public:

	FORCEINLINE UBlackboardComponent* GetBlackboardComp() const {return blackboardComponent;}
	FORCEINLINE UBehaviorTreeComponent* GetBehaviourTreeComp() const {return behaviorTreeComp;}
	
};
