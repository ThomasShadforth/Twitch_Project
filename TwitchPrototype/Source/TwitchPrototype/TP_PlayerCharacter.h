// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputActionValue.h"
#include "EnhancedActionKeyMapping.h"
#include "TPCharacterBase.h"
#include "Components/TimelineComponent.h"
#include "Interaction/TPDamageInterface.h"
#include "Player/PlayerCharacterInterface.h"
#include "TP_PlayerCharacter.generated.h"


class UCurveFloat;
class ATP_PlayerController;
class UBoxComponent;
class USphereComponent;
class ATP_BaseProjectile;
class USoundCue;
class ITPInteractInterface;


UENUM()
enum class EPlayerStates
{
	EPS_Grounded UMETA(DisplayName = "Grounded"),
	EPS_Climbing UMETA(DisplayName = "Climbing"),
	EPS_Falling UMETA(DisplayName = "Falling")
};


UCLASS()
class TWITCHPROTOTYPE_API ATP_PlayerCharacter : public ATPCharacterBase, public IPlayerCharacterInterface, public ITPDamageInterface
{
	GENERATED_BODY()
	
public:
	// Sets default values for this character's properties
	ATP_PlayerCharacter();

	virtual void PossessedBy(AController* NewController) override;
	
	virtual void Landed(const FHitResult& Hit) override;

	virtual void OnMovementModeChanged(EMovementMode PrevMovementMode, uint8 PreviousCustomMode) override;

	virtual void PlayerSprint_Implementation() override;

	virtual void PlayerStopSprint_Implementation() override;
	
	virtual void PlayerJump_Implementation() override;

	virtual void PlayerStopJump_Implementation() override;

	virtual void PlayerStomp_Implementation() override;
	
	virtual bool GetPlayerMoveDisabled_Implementation() override;

	virtual bool GetHasPlayerBeenHit_Implementation() override;

	virtual void SetHasPlayerBeenHit_Implementation(bool bHasBeenHit) override;

	virtual ATP_PlayerController* GetPlayerCharacterController_Implementation() override;

	virtual void SetIsOnLadder_Implementation(bool bOnLadder) override;
	
	virtual bool GetIsOnLadder_Implementation() override;

	virtual void StartPlayerAttack_Implementation() override;

	virtual void StopHoldingPlayerAttack_Implementation() override;
	
	virtual UCharacterMovementComponent* GetPlayerMovementComponent_Implementation() override;

	virtual bool GetIsOnGround_Implementation() override;

	virtual void ApplyKnockback_Implementation(FVector directionKnockbackForce) override;

	virtual void DamageCharacter_Implementation(AActor* DamageCauser, float KnockbackModifier) override;

	virtual void CollectExtraLife_Implementation() override;

	virtual void PlayerInteract_Implementation() override;

	virtual void PlayerEnableWallSlideCheck_Implementation(bool bShouldEnable) override;

	virtual bool GetWallSlideCheckEnabled_Implementation() override;
	
	UFUNCTION()
	void ManageCameraTransitions(bool bSwapToMainCamera);
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual bool CanJumpInternal_Implementation() const override;
	
	void Move(const FInputActionValue& Value);

	void PlayerJump();

	void StopPlayerJump();

	void AirDash();

	void AirDashEnd();

	void WallJump(FHitResult wallHit);

	void SetInterpMovementSpeed(float DeltaTime);

	void SetInterpSprintFOV(float DeltaTime);

	void SetInterpAirDashFOV(float DeltaTime);

	void SetInterpWallSlideSpeed(float DeltaTime);

	void SetInterpAirControl(float DeltaTime);
	
	void Aim(float DeltaTime);
	
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

	UFUNCTION()
	void OnCoyoteTimeEnd();

	bool CheckCoyoteTime();

	void WallSlide(float DeltaTime);

	UFUNCTION()
	void ChargeBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void InteractSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void InteractSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UFUNCTION()
	void WallSlideDirectionBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void WallSlideDirectionBoxEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	
	void SetChargeBoxCollision(bool bEnableCollision);

	void HandlePlayerThrow();

	void CheckForGround();

	void WallSlideTrace();

	void ResetHasBeenKnocked();

	virtual void InitAbilityActorInfo() override;

	void PlaySoundCue(USoundCue* InSoundCue);

	UFUNCTION()
	void ResetWallSlideSoundTimer();

	UFUNCTION()
	void ResetDamageSoundTimer();

	UFUNCTION()
	void ResetWasStomp();

	void ManageInteractableArray(AActor* OtherActor, bool bIsAddItems);

	
	
private:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* cameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* mainCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	USceneComponent* dialogueCameraPosition;
	
	FTimerHandle airDashHandle;

	FTimerHandle stompHandle;
	
	bool bHasAirDashed;

	bool bAirDashing;

	bool bIsSprinting;

	bool bIsStomping;

	bool bWasStomping;
	
	bool bStompStart;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Wall Sliding", meta = (AllowPrivateAccess = "true"))
	bool bWallSliding;

	UPROPERTY(VisibleAnywhere)
	bool bCanWallSlide;
	
	bool bHasPlayerBeenHit;
	
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

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	float defaultAirControl;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	float postWallJumpAirControl;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	float airControlInterpSpeed;
	
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
	float slidingWallJumpModifier;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wall Jump", meta = (AllowPrivateAccess = "true"))
	float upwardWallForce;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wall Jump", meta = (AllowPrivateAccess = "true"))
	UBoxComponent* wallSlideDirectionCheckBox;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	float cameraDefaultFOV;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	float cameraSprintFOV;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	float cameraAirDashFOV;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	float currentCameraFOV;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	float sprintFOVInterpSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	float airDashFOVInterpSpeed;
	
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

	//Experimental: Coyote Time variables
	FTimerHandle coyoteTimeHandle;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float coyoteTimeLimit;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wall Sliding", meta = (AllowPrivateAccess = "true"))
	float wallSlideRate;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wall Sliding", meta = (AllowPrivateAccess = "true"))
	float startingWallSlideRate;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wall Sliding", meta = (AllowPrivateAccess = "true"))
	float minWallSlideRate;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wall Sliding", meta = (AllowPrivateAccess = "true"))
	float wallSlideRateChangeSpeed;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wall Sliding",meta = (AllowPrivateAccess = "true"))
	float wallSlideCheckDistance;
	
	UPROPERTY(EditAnywhere, Category = "Wall Sliding")
	float wallSlideCheckRate;

	UPROPERTY(EditAnywhere, Category = "Wall Sliding")
	float initialWallSlideCheckDelay;
	
	FTimerHandle wallSlideCheckHandle;

	bool bWallSlideTraceStarted;
	
	bool bHasSnappedToWall = false;

	bool bIsOnLadder = false;

	bool bIsAimingThrow = false;

	bool bHasFullyAimed = false;
	
	float timeSpentAiming;

	UPROPERTY(EditAnywhere)
	float aimingTimeThreshold;

	UPROPERTY(VisibleAnywhere)
	FVector aimingDirection;
	
	//Player Charge Box
	UPROPERTY(EditAnywhere)
	UBoxComponent* playerChargeOverlapBox;

	UPROPERTY(EditAnywhere)
	USceneComponent* projectileThrowPoint;

	UPROPERTY(EditAnywhere)
	TSubclassOf<ATP_BaseProjectile> projectileClass;

	UPROPERTY(EditAnywhere, Category = "Ladder Climbing")
	USceneComponent* groundCheckPoint;

	UPROPERTY(EditAnywhere, Category = "Ladder Climbing")
	float groundCheckLength;

	void SetHasBeenHitFalse();
	
	bool bIsOnGround;

	bool bIsKnockedBack;

	FTimerHandle knockbackResetHandle;

	UPROPERTY(EditAnywhere, Category = "Charging")
	float chargeKnockbackModifier;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Player Sound Effects", meta = (AllowPrivateAccess = "true"))
	USoundCue* projectileAttackSound;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Player Sound Effects", meta = (AllowPrivateAccess = "true"))
	USoundCue* playerJumpSound;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Player Sound Effects", meta = (AllowPrivateAccess = "true"))
	USoundCue* playerDamageSound;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Player Sound Effects", meta = (AllowPrivateAccess = "true"))
	USoundCue* playerNormalLandingSound;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Player Sound Effects", meta = (AllowPrivateAccess = "true"))
	USoundCue* playerStompLandingSound;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Player Sound Effects", meta = (AllowPrivateAccess = "true"))
	USoundCue* playerAirDashSound;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Player Sound Effects", meta = (AllowPrivateAccess = "true"))
	USoundCue* playerWallJumpSound;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Player Sound Effects", meta = (AllowPrivateAccess = "true"))
	USoundCue* playerWallSlideSound;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Player Sound Effects", meta = (AllowPrivateAccess = "true"))
	USoundCue* playerDeathSound;

	FTimerHandle playerWallSlideSoundTimer;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Sound Effect Properties" ,meta = (AllowPrivateAccess = "true"))
	float wallSlideSoundResetTime;

	bool bShouldPlayWallSlideSound;

	FTimerHandle playerDamageSoundTimer;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Sound Effect Properties" ,meta = (AllowPrivateAccess = "true"))
	float playerDamageSoundResetTime;

	UPROPERTY(EditAnywhere)
	USphereComponent* interactOverlapSphere;

	TArray<UObject*> interactablesInRange;
	
	bool bShouldPlayDamageSound;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> dialogueCameraClass;

	UPROPERTY(EditAnywhere)
	float dialogueCamBlendTime;

	UPROPERTY(EditAnywhere)
	float dialogueCamBlendExponent;

	AActor* dialogueCamera;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Camera Shake", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<UCameraShakeBase> stompCameraShake;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Camera Shake", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<UCameraShakeBase> airDashCameraShake;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser);
	
	FORCEINLINE bool GetAirDashing() const {return bAirDashing;}

	//check if player is performing in air action
	FORCEINLINE bool GetInAirAction() const{return bAirDashing || bStompStart;}

	FORCEINLINE bool GetDisableMovement() const{return bAirDashing || bIsStomping || bIsKnockedBack;}

	FORCEINLINE bool GetPlayerHasBeenHit() const {return bHasPlayerBeenHit;}

	FORCEINLINE bool GetPlayerIsSprinting() const {return bIsSprinting;}

	FORCEINLINE bool GetPlayerWasStomping() const {return bWasStomping;}

	FORCEINLINE bool GetPlayerIsStomping() const {return bIsStomping;}

	FORCEINLINE bool GetPlayerIsWallSliding() const {return bWallSliding;}

	FORCEINLINE bool GetPlayerIsAirDashing() const {return bAirDashing;}
	
};
