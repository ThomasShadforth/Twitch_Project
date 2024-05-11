// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "EnhancedActionKeyMapping.h"
#include "Components/TimelineComponent.h"
#include "TP_PlayerCharacter.generated.h"


class UCurveFloat;


UCLASS()
class TWITCHPROTOTYPE_API ATP_PlayerCharacter : public ACharacter
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputMappingContext* playerDefaultMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* moveAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* jumpAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* lookAction;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* stopJumpAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* sprintAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* stopSprintAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* stompAction;
	
public:
	// Sets default values for this character's properties
	ATP_PlayerCharacter();

	virtual void Landed(const FHitResult& Hit) override;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void Move(const FInputActionValue& Value);

	void PlayerJump();

	void StopPlayerJump();

	void Look(const FInputActionValue& Value);

	UFUNCTION(BlueprintImplementableEvent)
	void CheckTempSprintButton();

	void AirDash();

	void AirDashEnd();

	void WallJump(FHitResult wallHit);
	
	void StartSprint();

	void StopSprint();

	void SetInterpMovementSpeed(float DeltaTime);

	void SetInterpFOV(float DeltaTime);
	
	bool CheckForWallJump(FHitResult& outWallHit);

	void StartStomp();

	void ApplyStomp();

	void CheckForStompTarget();

	UFUNCTION()
	void JumpSquashUpdate(float Alpha);

	UFUNCTION()
	void JumpSquashFinished();
	
	UFUNCTION()
	void LandSquashUpdate(float Alpha);

	UFUNCTION()
	void LandSquashFinished();

	UFUNCTION()
	void StompLandSquashUpdate(float Alpha);

	UFUNCTION()
	void StompLandSquashFinished();
	
private:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* cameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* mainCamera;

	FTimerHandle airDashHandle;

	FTimerHandle stompHandle;
	
	bool bHasAirDashed;

	bool bAirDashing;

	bool bIsSprinting;

	bool bIsStomping;

	bool bStompStart;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Air Dash", meta = (AllowPrivateAccess = "true"))
	float dashDistance;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Air Dash", meta = (AllowPrivateAccess = "true"))
	int maxAirDashes;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Air Dash", meta = (AllowPrivateAccess = "true"))
	int airDashCount;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Stomp, meta = (AllowPrivateAccess = "true"))
	float stompForce;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Stomp, meta = (AllowPrivateAccess = "true"))
	float stompDelayTime;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	float walkSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	float sprintSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	float sprintStartInterpSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	float sprintStopInterpSpeed;
	
	float currentMovementSpeed;

	//Name of the skeletal bone where the sphere trace is made for wall jumping
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wall Jump", meta = (AllowPrivateAccess = "true"))
	FName sphereCastPoint;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wall Jump", meta = (AllowPrivateAccess = "true"))
	float wallCheckRadius;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wall Jump", meta = (AllowPrivateAccess = "true"))
	float wallCheckDistance;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wall Jump", meta = (AllowPrivateAccess = "true"))
	float forwardWallForce;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wall Jump", meta = (AllowPrivateAccess = "true"))
	float upwardWallForce;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	float cameraDefaultFOV;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	float cameraSprintFOV;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	float currentCameraFOV;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	float fovInterpSpeed;

	//Squash and Stretch controls
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Squash & Strecth", meta = (AllowPrivateAccess = "true"))
	FVector baseScale;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Squash & Strecth", meta = (AllowPrivateAccess = "true"))
	FVector jumpSqueezeFactor;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Squash & Strecth", meta = (AllowPrivateAccess = "true"))
	FVector landSqueezeFactor;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Squash & Strecth", meta = (AllowPrivateAccess = "true"))
	FVector stompLandSqueezeFactor;
	
	UTimelineComponent* jumpSquashTimeline;

	UTimelineComponent* landSquashTimeline;

	UTimelineComponent* stompLandSquashTimeline;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Squash & Stretch", meta = (AllowPrivateAccess = "true"))
	UCurveFloat* jumpSquashCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Squash & Stretch", meta = (AllowPrivateAccess = "true"))
	UCurveFloat* landSquashCurve;

	//Delegate function to be bound with JumpSquashUpdate(float Alpha)
	FOnTimelineFloat jumpSquashFunction{};

	//Delegate to be bound with jumpSquashFinished()
	FOnTimelineEvent jumpSquashFinishedFunction{};

	FOnTimelineFloat landSquashFunction{};
	
	FOnTimelineEvent landFinishedFunction{};

	FOnTimelineFloat stompLandSquashFunc{};

	FOnTimelineEvent stompLandFinishedFunc{};
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	FORCEINLINE bool GetAirDashing() const {return bAirDashing;}

	//check if player is performing in air action
	FORCEINLINE bool GetInAirAction() const{return bAirDashing || bStompStart;}

	FORCEINLINE bool GetDisableMovement() const{return bAirDashing || bIsStomping;}
};
