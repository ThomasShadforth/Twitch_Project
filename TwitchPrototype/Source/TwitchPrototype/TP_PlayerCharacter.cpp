// Fill out your copyright notice in the Description page of Project Settings.

#include "TP_PlayerCharacter.h"

#include "AbilitySystemComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/InputSettings.h"
#include "Components/CapsuleComponent.h"
#include "EnhancedInputComponent.h"
#include "InputMappingContext.h"
#include "EnhancedInputSubsystems.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "DrawDebugHelpers.h"
#include "StompInterface.h"
#include "FrameTypes.h"
#include "TPEnemyInterface.h"
#include "TP_BaseProjectile.h"
#include "TP_PlayerController.h"
#include "AbilitySystem/TPBaseAbilitySystemComp.h"
#include "Components/BoxComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Interaction/TPChargeInterface.h"
#include "Kismet/GameplayStatics.h"
#include "Player/TPPlayerState.h"
#include "Sound/SoundCue.h"
#include "UI/HUD/TPHUD.h"


// Sets default values
ATP_PlayerCharacter::ATP_PlayerCharacter() :
walkSpeed(700.f),
sprintSpeed(1000.f),
currentMovementSpeed(0.f),
sprintStartInterpSpeed(1.f),
sprintStopInterpSpeed(2.f),
wallCheckRadius(20.0f),
wallCheckDistance(200.0f),
wallSlideRate(1800.f),
bIsKnockedBack(false),
bShouldPlayWallSlideSound(true),
bShouldPlayDamageSound(true)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	cameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("Camera Boom"));
	cameraBoom->SetupAttachment(RootComponent);
	cameraBoom->TargetArmLength = 240.f;
	cameraBoom->SocketOffset = FVector(0,0,80);
	cameraBoom->bUsePawnControlRotation = true;
	
	mainCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	mainCamera->SetupAttachment(cameraBoom, USpringArmComponent::SocketName);
	mainCamera->bUsePawnControlRotation = false;

	jumpSquashTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("Jump Squash Timeline"));
	jumpSquashFunction.BindUFunction(this, FName("JumpSquashUpdate"));
	jumpSquashFinishedFunction.BindUFunction(this, FName("jumpSquashFinished"));
	
	landSquashTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("Land Squash Timeline"));
	landSquashFunction.BindUFunction(this, FName("LandSquashUpdate"));
	landFinishedFunction.BindUFunction(this, FName("LandSquashFinished"));

	stompLandSquashTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("Stomp Land Squash Timeline"));
	stompLandSquashFunc.BindUFunction(this, FName("StompLandSquashUpdate"));
	stompLandFinishedFunc.BindUFunction(this, FName("StompLandSquashFinished"));

	playerChargeOverlapBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Charge Overlap"));
	playerChargeOverlapBox->SetupAttachment(RootComponent);

	projectileThrowPoint = CreateDefaultSubobject<USceneComponent>(TEXT("Throw Point"));
	projectileThrowPoint->SetupAttachment(RootComponent);

	groundCheckPoint = CreateDefaultSubobject<USceneComponent>(TEXT("Ground Check Point"));
	groundCheckPoint->SetupAttachment(RootComponent);
	
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.f, 0.0f);

	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;
}

void ATP_PlayerCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	InitAbilityActorInfo();
}

void ATP_PlayerCharacter::Landed(const FHitResult& Hit)
{
	Super::Landed(Hit);
	
	if(landSquashCurve && !bIsStomping)
	{
		landSquashTimeline->PlayFromStart();
		PlaySoundCue(playerNormalLandingSound);
	} else if(landSquashCurve && bIsStomping)
	{
		stompLandSquashTimeline->PlayFromStart();
		PlaySoundCue(playerStompLandingSound);
	}

	airDashCount = 0;
	bHasAirDashed = false;
	bIsStomping = false;
	bWallSliding = false;
	bHasSnappedToWall = false;
	wallSlideRate = startingWallSlideRate;
	GetWorldTimerManager().ClearTimer(coyoteTimeHandle);

	FTimerHandle resetWasStompHandle;
	
	GetWorldTimerManager().SetTimer(resetWasStompHandle, this, &ATP_PlayerCharacter::ResetWasStomp, .1f);
}

void ATP_PlayerCharacter::OnMovementModeChanged(EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	Super::OnMovementModeChanged(PrevMovementMode, PreviousCustomMode);

	if(GetCharacterMovement()->MovementMode == MOVE_Falling)
	{
		GetWorldTimerManager().SetTimer(coyoteTimeHandle, this, &ATP_PlayerCharacter::OnCoyoteTimeEnd, coyoteTimeLimit);
	}
}

void ATP_PlayerCharacter::PlayerSprint_Implementation()
{
	IPlayerCharacterInterface::PlayerSprint_Implementation();

	bIsSprinting = true;

	SetChargeBoxCollision(true);
	
}

void ATP_PlayerCharacter::PlayerStopSprint_Implementation()
{
	IPlayerCharacterInterface::PlayerStopSprint_Implementation();

	bIsSprinting = false;

	SetChargeBoxCollision(false);
	
}

void ATP_PlayerCharacter::PlayerJump_Implementation()
{
	IPlayerCharacterInterface::PlayerJump_Implementation();

	PlayerJump();
}

void ATP_PlayerCharacter::PlayerStopJump_Implementation()
{
	IPlayerCharacterInterface::PlayerStopJump_Implementation();

	StopPlayerJump();
}

void ATP_PlayerCharacter::PlayerStomp_Implementation()
{
	IPlayerCharacterInterface::PlayerStomp_Implementation();

	StartStomp();
}

bool ATP_PlayerCharacter::GetPlayerMoveDisabled_Implementation()
{
	return GetDisableMovement();
}

bool ATP_PlayerCharacter::GetHasPlayerBeenHit_Implementation()
{
	return GetPlayerHasBeenHit();
}

void ATP_PlayerCharacter::SetHasPlayerBeenHit_Implementation(bool bHasBeenHit)
{
	IPlayerCharacterInterface::SetHasPlayerBeenHit_Implementation(bHasBeenHit);

	bHasPlayerBeenHit = bHasBeenHit;
	
	if(bHasBeenHit){
		FTimerHandle resetHitHandle;
		GetWorldTimerManager().SetTimer(resetHitHandle, this, &ATP_PlayerCharacter::SetHasBeenHitFalse, 1.f);
	}
}

ATP_PlayerController* ATP_PlayerCharacter::GetPlayerCharacterController_Implementation()
{
	if(ATP_PlayerController* pc = Cast<ATP_PlayerController>(GetController()))
	{
		return pc;
	}else
	{
		return nullptr;
	}
	
}

void ATP_PlayerCharacter::SetIsOnLadder_Implementation(bool bOnLadder)
{
	IPlayerCharacterInterface::SetIsOnLadder_Implementation(bOnLadder);

	bIsOnLadder = bOnLadder;
}

bool ATP_PlayerCharacter::GetIsOnLadder_Implementation()
{
	return bIsOnLadder;
}

void ATP_PlayerCharacter::StartPlayerAttack_Implementation()
{
	bIsAimingThrow = true;

	//UE_LOG(LogTemp, Warning, TEXT("STARTED TO AIM THROW"));
}

void ATP_PlayerCharacter::StopHoldingPlayerAttack_Implementation()
{
	bIsAimingThrow = false;

	//UE_LOG(LogTemp, Warning, TEXT("STOPPED AIMING. PREPARING TO THROW!"));

	HandlePlayerThrow();
	//Do what is needed to throw projectile
}

UCharacterMovementComponent* ATP_PlayerCharacter::GetPlayerMovementComponent_Implementation()
{
	return GetCharacterMovement();
}

bool ATP_PlayerCharacter::GetIsOnGround_Implementation()
{
	return bIsOnGround;
}

void ATP_PlayerCharacter::ApplyKnockback_Implementation(FVector directionKnockbackForce)
{
	LaunchCharacter(directionKnockbackForce, false, false);
	//GetCharacterMovement()->Velocity = directionKnockbackForce;
	bIsKnockedBack = true;

	//Set timer for resetting knockback state
	GetWorldTimerManager().SetTimer(knockbackResetHandle, this, &ATP_PlayerCharacter::ResetHasBeenKnocked, .35f, false);
}

void ATP_PlayerCharacter::DamageCharacter_Implementation(AActor* DamageCauser, float KnockbackModifier)
{
	ITPDamageInterface::DamageCharacter_Implementation(DamageCauser, KnockbackModifier);

	if(bShouldPlayDamageSound)
	{
		bShouldPlayDamageSound = false;
		PlaySoundCue(playerDamageSound);
		GetWorldTimerManager().SetTimer(playerDamageSoundTimer, this, &ATP_PlayerCharacter::ResetDamageSoundTimer, playerDamageSoundResetTime);
	}	

	FVector knockbackDirection = GetActorLocation() - DamageCauser->GetActorLocation();
	knockbackDirection.Normalize();

	knockbackDirection.Z = 1;

	knockbackDirection *= KnockbackModifier;

	GetCharacterMovement()->AddImpulse(knockbackDirection, true);
}

void ATP_PlayerCharacter::CollectExtraLife_Implementation()
{
	IPlayerCharacterInterface::CollectExtraLife_Implementation();

	if(ATPPlayerState* tpPlayerState = GetPlayerState<ATPPlayerState>())
	{
		tpPlayerState->SetCurrentLives_Implementation(1);
	}
}

// Called when the game starts or when spawned
void ATP_PlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	
	if(GetCharacterMovement())
	{
		currentMovementSpeed = GetCharacterMovement()->MaxWalkSpeed;
		
	}

	currentCameraFOV = cameraDefaultFOV;

	//Bind Callbacks to Delegates - Charge Box
	playerChargeOverlapBox->OnComponentBeginOverlap.AddDynamic(this, &ATP_PlayerCharacter::ChargeBoxOverlap);

	//Set Charge Box Collision Presets
	playerChargeOverlapBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	playerChargeOverlapBox->SetCollisionResponseToAllChannels(ECR_Ignore);
	playerChargeOverlapBox->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	
	//Define timeline parameters
	//Check if squash curve is valid
	if(jumpSquashCurve)
	{
		//Add the FCurve as a property for the timeline
		jumpSquashTimeline->AddInterpFloat(jumpSquashCurve, jumpSquashFunction, FName("Alpha"));
		jumpSquashTimeline->SetTimelineFinishedFunc(jumpSquashFinishedFunction);

		jumpSquashTimeline->SetLooping(false);
	}

	if(landSquashCurve)
	{
		landSquashTimeline->AddInterpFloat(landSquashCurve, landSquashFunction, FName("Alpha"));
		landSquashTimeline->SetTimelineFinishedFunc(landFinishedFunction);

		landSquashTimeline->SetLooping(false);

		stompLandSquashTimeline->AddInterpFloat(landSquashCurve, stompLandSquashFunc, FName("Alpha"));
		stompLandSquashTimeline->SetTimelineFinishedFunc(stompLandFinishedFunc);

		stompLandSquashTimeline->SetLooping(false);
	}

	baseScale = GetMesh()->GetRelativeScale3D();

	FTimerHandle groundCheckHandle;

	GetWorldTimerManager().SetTimer(groundCheckHandle, this, &ATP_PlayerCharacter::CheckForGround, .5f, true);

	wallSlideRate = startingWallSlideRate;
}

bool ATP_PlayerCharacter::CanJumpInternal_Implementation() const
{
	//Can Jump is called automatically when the player presses the jump button
	//Checks whether or not the player has jumps remaining.
	//In this override, also checks if coyote time is active
	
	bool bCanJump = Super::CanJumpInternal_Implementation();

	bool bCoyoteTimeActive = GetWorldTimerManager().GetTimerRemaining(coyoteTimeHandle) > 0.0f;
	
	if(bCanJump || bCoyoteTimeActive)
	{
		
		return true;
	}
	
	return false;
}

void ATP_PlayerCharacter::Move(const FInputActionValue& Value)
{
	if(GetDisableMovement()) return;

	FVector2D moveValue = Value.Get<FVector2D>();

	if(Controller != nullptr)
	{
		const FRotator rotation = Controller->GetControlRotation();
		const FRotator yawRotation = FRotator(0, rotation.Yaw, 0);

		const FVector forwardDirection = FRotationMatrix(yawRotation).GetUnitAxis(EAxis::X);
		const FVector rightDirection = FRotationMatrix(yawRotation).GetUnitAxis(EAxis::Y);

		AddMovementInput(forwardDirection, moveValue.Y);
		AddMovementInput(rightDirection, moveValue.X);
	}
}

void ATP_PlayerCharacter::PlayerJump()
{
	if(GetDisableMovement()) return;

	if(GetIsOnLadder_Implementation())
	{
		//To Do: change movement mode back to walking
		GetCharacterMovement()->SetMovementMode(MOVE_Falling);
		SetIsOnLadder_Implementation(false);
		return;
		//Set is on ladder to false(?)
	}
	
	if(!GetCharacterMovement()->IsFalling() && jumpSquashCurve)
	{
		jumpSquashTimeline->PlayFromStart();
		PlaySoundCue(playerJumpSound);
	}
	
	ACharacter::Jump();

	FHitResult wallHit;

	bool bHasFoundWall = CheckForWallJump(wallHit);
	
	if(GetCharacterMovement()->IsFalling() && bHasFoundWall)
	{
		WallJump(wallHit);
		PlaySoundCue(playerWallJumpSound);
	} else if(!bHasAirDashed && GetCharacterMovement()->IsFalling() && !bHasFoundWall && !CheckCoyoteTime())
	{
		if(bAirDashing) return;
		
		if(airDashCount == maxAirDashes)
		{
			bHasAirDashed = true;
		} else
		{
			airDashCount++;
			AirDash();
			PlaySoundCue(playerAirDashSound);
		}
	}
}

void ATP_PlayerCharacter::StopPlayerJump()
{
	ACharacter::StopJumping();
}

void ATP_PlayerCharacter::AirDash()
{
	bAirDashing = true;
	
	GetCharacterMovement()->GravityScale = 0.0f;

	GetCharacterMovement()->Velocity = GetActorForwardVector() * dashDistance;
	
	GetWorldTimerManager().SetTimer(airDashHandle, this, &ATP_PlayerCharacter::AirDashEnd, .35f);
}

void ATP_PlayerCharacter::AirDashEnd()
{
	GetCharacterMovement()->GravityScale = 3.0f;
	bAirDashing = false;
}

void ATP_PlayerCharacter::WallJump(FHitResult wallHit)
{
	//FHitResult secondTrace;
	FVector traceUnitDirection = UKismetMathLibrary::GetDirectionUnitVector(wallHit.TraceStart, wallHit.TraceEnd);
	FVector reflectedVector = UKismetMathLibrary::GetReflectionVector(traceUnitDirection, wallHit.Normal);
	FVector reflectedWallForce = wallHit.Location + (reflectedVector * 1.0f);

	FVector wallForce = reflectedVector * forwardWallForce;
	wallForce.Z = upwardWallForce;
	
	GetCharacterMovement()->Velocity = wallForce;

	//Set the rotation
	FRotator newRotation = UKismetMathLibrary::MakeRotFromX(reflectedVector);
	SetActorRotation(newRotation);
	
	jumpSquashTimeline->PlayFromStart();
	
}

void ATP_PlayerCharacter::SetInterpMovementSpeed(float DeltaTime)
{
	float speedTarget = bIsSprinting ? sprintSpeed : walkSpeed;
	
	float moveInterpSpeed = bIsSprinting ? sprintStartInterpSpeed : sprintStopInterpSpeed;
	
	currentMovementSpeed = FMath::FInterpTo(currentMovementSpeed, speedTarget, DeltaTime, moveInterpSpeed);

	GetCharacterMovement()->MaxWalkSpeed = currentMovementSpeed;
}

void ATP_PlayerCharacter::SetInterpFOV(float DeltaTime)
{
	float fovTarget = bIsSprinting ? cameraSprintFOV : cameraDefaultFOV;

	currentCameraFOV = FMath::FInterpTo(currentCameraFOV, fovTarget, DeltaTime, fovInterpSpeed);

	mainCamera->SetFieldOfView(currentCameraFOV);
}

void ATP_PlayerCharacter::SetInterpWallSlideSpeed(float DeltaTime)
{
	if(!bWallSliding) return;

	UE_LOG(LogTemp, Warning, TEXT("ADJUSTING WALL SLIDE SPEED!"));
	
	wallSlideRate = FMath::FInterpTo(wallSlideRate, minWallSlideRate, DeltaTime, wallSlideRateChangeSpeed);
}

void ATP_PlayerCharacter::Aim(float DeltaTime)
{
	if(!bIsAimingThrow) return;

	timeSpentAiming += DeltaTime;

	if(timeSpentAiming >= aimingTimeThreshold)
	{
		if(!bHasFullyAimed)
		{
			bHasFullyAimed = true;
		}
		
		aimingDirection = mainCamera->GetForwardVector();
		
	}
}

bool ATP_PlayerCharacter::CheckForWallJump(FHitResult& outWallHit)
{
	const FVector traceStart = GetMesh()->GetBoneLocation(sphereCastPoint) + FVector(0, 0, 80);
	const FVector traceEnd = traceStart + (GetActorForwardVector() * wallCheckDistance);
	TArray<AActor*> ignoredObjects;
	
	UKismetSystemLibrary::SphereTraceSingle(this, traceStart, traceEnd, wallCheckRadius, UEngineTypes::ConvertToTraceType(ECC_GameTraceChannel2), false, ignoredObjects, EDrawDebugTrace::None, outWallHit, true);
	
	if(outWallHit.bBlockingHit)
	{
		return true;
	} else
	{
		return false;
	}
	
}

void ATP_PlayerCharacter::StartStomp()
{
	if(GetDisableMovement() || !GetCharacterMovement()->IsFalling()) return;

	
	bStompStart = true;
	bIsStomping = true;
	bWasStomping = true;
	GetCharacterMovement()->GravityScale = 0.f;
	GetCharacterMovement()->Velocity = FVector::Zero();
	GetWorldTimerManager().SetTimer(stompHandle, this, &ATP_PlayerCharacter::ApplyStomp, stompDelayTime);
}

void ATP_PlayerCharacter::ApplyStomp()
{
	bStompStart = false;
	GetCharacterMovement()->Velocity += (FVector(0.f, 0.f, -1.f) * stompForce);
}

void ATP_PlayerCharacter::CheckForStompTarget()
{
	//To do: Use overlap sphere to check for stuff here!
	//Make interface for stomping
	FHitResult stompHit;
	TArray<AActor*> ignoredObjects;
	FVector traceStart = GetMesh()->GetBoneLocation(sphereCastPoint);
	
	
	UKismetSystemLibrary::SphereTraceSingle(this, traceStart, traceStart, 60.f, TraceTypeQuery1, false, ignoredObjects, EDrawDebugTrace::None, stompHit, true);

	if(stompHit.GetComponent())
	{
		if(UKismetSystemLibrary::DoesImplementInterface(stompHit.GetActor(), UStompInterface::StaticClass()))
		{
			IStompInterface::Execute_StompObject(stompHit.GetActor(), stompHit);
		}
	}
	
}

void ATP_PlayerCharacter::JumpSquashUpdate(float Alpha)
{
	FVector squashedScale{};

	squashedScale = FMath::Lerp(baseScale, (baseScale * jumpSqueezeFactor), Alpha);
	
	GetMesh()->SetRelativeScale3D(squashedScale);
}

void ATP_PlayerCharacter::JumpSquashFinished()
{
}

void ATP_PlayerCharacter::LandSquashUpdate(float Alpha)
{
	FVector squashedScale{};

	squashedScale = FMath::Lerp(baseScale, (baseScale * landSqueezeFactor), Alpha);

	GetMesh()->SetRelativeScale3D(squashedScale);
}

void ATP_PlayerCharacter::LandSquashFinished()
{
	
}

void ATP_PlayerCharacter::StompLandSquashUpdate(float Alpha)
{
	FVector squashedScale{};

	squashedScale = FMath::Lerp(baseScale, (baseScale * stompLandSqueezeFactor), Alpha);

	GetMesh()->SetRelativeScale3D(squashedScale);
}

void ATP_PlayerCharacter::StompLandSquashFinished()
{
}

//Empty method simply used for the purpose of setting the timer for coyote time
void ATP_PlayerCharacter::OnCoyoteTimeEnd()
{
	
}

bool ATP_PlayerCharacter::CheckCoyoteTime()
{
	return GetWorldTimerManager().GetTimerRemaining(coyoteTimeHandle) > 0.0f;
}

void ATP_PlayerCharacter::WallSlide(float DeltaTime)
{

	//TO DO: Adjust wall slide code to reduce frequency of line traces (For performance reasons)
	if(GetCharacterMovement()->IsFalling() && GetCharacterMovement()->Velocity.Z < 0){
		FHitResult wallCheckHit;
		FVector traceStart = GetActorLocation();
		FVector traceEnd = traceStart + (GetActorForwardVector() * wallSlideCheckDistance);
		TArray<AActor*> ignoredObjects;
		
		UKismetSystemLibrary::LineTraceSingle(this, traceStart, traceEnd, UEngineTypes::ConvertToTraceType(ECC_GameTraceChannel2), false, ignoredObjects, EDrawDebugTrace::None, wallCheckHit, true);

		if(wallCheckHit.bBlockingHit)
		{

			if(!bHasSnappedToWall)
			{
				//SNAP TO THE WALL
				bHasSnappedToWall = true;
				FVector invertedNormal = -1 * wallCheckHit.Normal;
				SetActorRotation(invertedNormal.Rotation());
				GetCharacterMovement()->Velocity = FVector(0, 0, -50.f);
			}
			
			bWallSliding = true;

			if(bShouldPlayWallSlideSound)
			{
				bShouldPlayWallSlideSound = false;
				GetWorldTimerManager().SetTimer(playerWallSlideSoundTimer, this, &ATP_PlayerCharacter::ResetWallSlideSoundTimer, wallSlideSoundResetTime);
				PlaySoundCue(playerWallSlideSound);
			}
			
			GetCharacterMovement()->Velocity = UKismetMathLibrary::VInterpTo_Constant(GetCharacterMovement()->Velocity, FVector(0,0,0), DeltaTime, wallSlideRate);
			
		} else
		{
			bWallSliding = false;
			bHasSnappedToWall = false;
			wallSlideRate = startingWallSlideRate;
		}
	}

	/*bWallSliding = false;
	bHasSnappedToWall = false;
	wallSlideRate = startingWallSlideRate;*/
}

void ATP_PlayerCharacter::ChargeBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("CHARGED INTO OBJECT"))
	
	if(UKismetSystemLibrary::DoesImplementInterface(OtherActor, UTPChargeInterface::StaticClass()))
	{
		ITPChargeInterface::Execute_ObjectChargedInto(OtherActor, GetActorLocation(), chargeKnockbackModifier);
	}
}

void ATP_PlayerCharacter::SetChargeBoxCollision(bool bEnableCollision)
{
	playerChargeOverlapBox->SetCollisionEnabled(bEnableCollision ? ECollisionEnabled::QueryAndPhysics : ECollisionEnabled::NoCollision);
}

void ATP_PlayerCharacter::HandlePlayerThrow()
{

	if(projectileClass == nullptr) return;
	
	FVector throwDirection;
	
	if(bHasFullyAimed)
	{
		throwDirection = aimingDirection;
	} else
	{
		throwDirection = GetActorForwardVector();
	}

	ATP_BaseProjectile* projectile = GetWorld()->SpawnActor<ATP_BaseProjectile>(projectileClass, projectileThrowPoint->GetComponentLocation(), throwDirection.Rotation());
	projectile->SetOwningActor(this);
	projectile->GetProjectileMovement()->Velocity = throwDirection * 500.f;
	
	bHasFullyAimed = false;
	timeSpentAiming = 0.0f;
}

void ATP_PlayerCharacter::CheckForGround()
{
	FHitResult groundCheckResult;

	FVector checkStart = groundCheckPoint->GetComponentLocation();
	FVector checkEnd = checkStart + (GetActorUpVector() * -1) * groundCheckLength;

	TArray<AActor*> ignoredActors;
	
	UKismetSystemLibrary::LineTraceSingle(this, checkStart, checkEnd, TraceTypeQuery1, false, ignoredActors, EDrawDebugTrace::None, groundCheckResult, true);

	if(groundCheckResult.bBlockingHit)
	{
		bIsOnGround = true;
	} else
	{
		bIsOnGround = false;
	}
}

void ATP_PlayerCharacter::WallSlideTrace()
{
	
}

void ATP_PlayerCharacter::ResetHasBeenKnocked()
{
	bIsKnockedBack = false;
}

void ATP_PlayerCharacter::InitAbilityActorInfo()
{
	Super::InitAbilityActorInfo();
	
	ATPPlayerState* tpPlayerState = GetPlayerState<ATPPlayerState>();

	check(tpPlayerState);

	tpPlayerState->GetAbilitySystemComponent()->InitAbilityActorInfo(tpPlayerState, this);
	Cast<UTPBaseAbilitySystemComp>(tpPlayerState->GetAbilitySystemComponent())->AbilityActorInfoSet();
	abilitySystemComp = tpPlayerState->GetAbilitySystemComponent();

	attributeSet = tpPlayerState->GetAttributeSet();

	if(ATP_PlayerController* tpPlayerController = Cast<ATP_PlayerController>(GetController()))
	{
		if(ATPHUD* tpHUD = Cast<ATPHUD>(tpPlayerController->GetHUD()))
		{
			tpHUD->InitOverlay(tpPlayerController, tpPlayerState, abilitySystemComp, attributeSet);
		} else
		{
			UE_LOG(LogTemp, Warning, TEXT("DERIVED ATPHUD CLASS DOES NOT EXIST. PLEASE CREATE AND POPULATE HUD SETTINGS IN GM"));
		}
	}

	//To Do (Optional): Set Default Attribute Values
	InitializeDefaultAttributes();
	
}

void ATP_PlayerCharacter::PlaySoundCue(USoundCue* InSoundCue)
{
	if(InSoundCue)
	{
		UGameplayStatics::PlaySound2D(this, InSoundCue);
	} else
	{
		UE_LOG(LogTemp, Warning, TEXT("SOUND CUE HAS NOT BEEN POPULATED"));
	}
}

void ATP_PlayerCharacter::ResetWallSlideSoundTimer()
{
	bShouldPlayWallSlideSound = true;
}

void ATP_PlayerCharacter::ResetDamageSoundTimer()
{
	bShouldPlayDamageSound = true;
}

void ATP_PlayerCharacter::ResetWasStomp()
{
	bWasStomping = false;
}

void ATP_PlayerCharacter::SetHasBeenHitFalse()
{
	SetHasPlayerBeenHit_Implementation(false);
}

// Called every frame
void ATP_PlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	SetInterpMovementSpeed(DeltaTime);
	SetInterpFOV(DeltaTime);
	WallSlide(DeltaTime);
	SetInterpWallSlideSpeed(DeltaTime);
	
	Aim(DeltaTime);
	
	if(bIsStomping)
	{
		CheckForStompTarget();
	}
	
}

float ATP_PlayerCharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator,
	AActor* DamageCauser)
{

	UE_LOG(LogTemp, Warning, TEXT("DAMAGE DEALT!!"));
	
	return DamageAmount;
}


