// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogueSystem/NPCDialogueComponent.h"

#include "BrainComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Blueprint/UserWidget.h"
#include "DialogueSystem/NPCDialogueAIController.h"
#include "TwitchPrototype/TP_PlayerCharacter.h"
#include "UI/Widget/TPDialogBoxWidget.h"

// Sets default values for this component's properties
UNPCDialogueComponent::UNPCDialogueComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UNPCDialogueComponent::Interact_Implementation(ATP_PlayerCharacter* PlayerCharacter)
{
	ITPInteractInterface::Interact_Implementation(PlayerCharacter);

	playerChar = PlayerCharacter;
	
	if(dialogueBoxClass)
	{
		pc = (APlayerController*)PlayerCharacter->GetController();
		
		UUserWidget* dialogueBox = CreateWidget<UUserWidget>(pc, dialogueBoxClass);
		
		dialogBoxWidget = Cast<UTPDialogBoxWidget>(dialogueBox);

		if(dialogBoxWidget == nullptr) return;
		
		dialogBoxWidget->onExit.AddDynamic(this, &UNPCDialogueComponent::OnDialogueExitCallback);
		
		dialogBoxWidget->AddToViewport(-1000);
		UWidgetBlueprintLibrary::SetInputMode_UIOnlyEx(pc, dialogBoxWidget, EMouseLockMode::DoNotLock, false);
		pc->bShowMouseCursor = true;

		//To Do: Run Behaviour Tree
		if(dialogueTree == nullptr || dialogueAIController == nullptr) return;

		dialogueAIController->RunBehaviorTree(dialogueTree);

		UBlackboardComponent* bbComp;
		
		dialogueAIController->UseBlackboard(dialogueBlackboard, bbComp);
		bbComp->SetValueAsObject(FName("DialogueWidget"), dialogBoxWidget);

		playerChar->ManageCameraTransitions(false);
	}
}


// Called when the game starts
void UNPCDialogueComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	dialogueAIController = GetWorld()->SpawnActor<ANPCDialogueAIController>(ANPCDialogueAIController::StaticClass(), FVector{}, FRotator{});
}

void UNPCDialogueComponent::OnDialogueExitCallback()
{
	UWidgetBlueprintLibrary::SetInputMode_GameOnly(pc, false);
	pc->bShowMouseCursor = false;
	dialogueAIController->GetBrainComponent()->StopLogic(FString(""));
	dialogBoxWidget->RemoveFromParent();
	playerChar->ManageCameraTransitions(true);
	playerChar = nullptr;
}


// Called every frame
void UNPCDialogueComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


