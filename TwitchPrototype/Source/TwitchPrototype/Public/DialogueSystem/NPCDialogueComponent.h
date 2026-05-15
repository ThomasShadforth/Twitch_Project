// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Interaction/TPInteractInterface.h"
#include "NPCDialogueComponent.generated.h"


class ANPCDialogueAIController;
class ATP_PlayerCharacter;
class UUserWidget;
class UTPDialogBoxWidget;
class UBehaviorTree;
class UBlackboardData;
class UBlackboardComponent;

UCLASS( Blueprintable, BlueprintType, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TWITCHPROTOTYPE_API UNPCDialogueComponent : public UActorComponent, public ITPInteractInterface
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UNPCDialogueComponent();

	virtual void Interact_Implementation(ATP_PlayerCharacter* PlayerCharacter) override;
	
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnDialogueExitCallback();
	
private:

	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	ANPCDialogueAIController* dialogueAIController;

	UPROPERTY(EditAnywhere)
	UBlackboardData* dialogueBlackboard;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> dialogueBoxClass;

	UTPDialogBoxWidget* dialogBoxWidget;

	APlayerController* pc;

	ATP_PlayerCharacter* playerChar;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UBehaviorTree* dialogueTree;
	
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

};
