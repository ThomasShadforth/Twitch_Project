// Fill out your copyright notice in the Description page of Project Settings.

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
#include "TP_PlayerCharacter.h"

#include "FrameTypes.h"


// Sets default values
ATP_PlayerCharacter::ATP_PlayerCharacter() :
walkSpeed(600.f),
sprintSpeed(900.f),
currentMovementSpeed(0.f),
sprintStartInterpSpeed(1.f),
sprintStopInterpSpeed(2.f),
wallCheckRadius(20.0f),
wallCheckDistance(200.0f)
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
	
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.f, 0.0f);

	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;
}

void ATP_PlayerCharacter::Landed(const FHitResult& Hit)
{
	Super::Landed(Hit);
	
	if(landSquashCurve && !bIsStomping)
	{
		landSquashTimeline->PlayFromStart();
	} else if(landSquashCurve && bIsStomping)
	{
		stompLandSquashTimeline->PlayFromStart();
	}

	airDashCount = 0;
	bHasAirDashed = false;
	bIsStomping = false;
}

// Called when the game starts or when spawned
void ATP_PlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	APlayerController* pController = Cast<APlayerController>(Controller);

	if(pController)
	{
		UEnhancedInputLocalPlayerSubsystem* subSystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(pController->GetLocalPlayer());

		if(subSystem)
		{
			subSystem->AddMappingContext(playerDefaultMappingContext, 0);
		}
	}

	if(GetCharacterMovement())
	{
		currentMovementSpeed = GetCharacterMovement()->MaxWalkSpeed;
		
	}

	currentCameraFOV = cameraDefaultFOV;

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

	if(!GetCharacterMovement()->IsFalling() && jumpSquashCurve)
	{
		jumpSquashTimeline->PlayFromStart();
	}
	
	ACharacter::Jump();

	FHitResult wallHit;

	bool bHasFoundWall = CheckForWallJump(wallHit);
	
	if(GetCharacterMovement()->IsFalling() && bHasFoundWall)
	{
		WallJump(wallHit);
	} else if(!bHasAirDashed && GetCharacterMovement()->IsFalling() && !bHasFoundWall)
	{
		if(bAirDashing) return;
		
		if(airDashCount == maxAirDashes)
		{
			bHasAirDashed = true;
		} else
		{
			airDashCount++;
			AirDash();
		}
	}
}

void ATP_PlayerCharacter::StopPlayerJump()
{
	ACharacter::StopJumping();
}

void ATP_PlayerCharacter::Look(const FInputActionValue& Value)
{
	FVector2D lookAxisVector = Value.Get<FVector2D>();
	
	if(Controller != nullptr)
	{
		AddControllerYawInput(lookAxisVector.X);
		AddControllerPitchInput(lookAxisVector.Y);
	}
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
	FVector wallNormal = wallHit.Normal;

	FVector currentForward = GetActorForwardVector();

	wallNormal.Normalize();

	FRotator newRotation = UKismetMathLibrary::MakeRotFromX(wallNormal);
	SetActorRotation(newRotation);
	
	FVector wallForce = wallNormal * forwardWallForce;
	wallForce.Z = upwardWallForce;
	
	GetCharacterMovement()->Velocity = wallForce;

	jumpSquashTimeline->PlayFromStart();
	
	//UE_LOG(LogTemp, Warning, TEXT("WALL NORMAL, X: %f, Y: %f, Z: %f"), wallNormal.X, wallNormal.Y, wallNormal.Z);
	//UE_LOG(LogTemp, Warning, TEXT("Angle between normal and player forward: %f Degrees"), angle);
}

void ATP_PlayerCharacter::StartSprint()
{
	bIsSprinting = true;
	//GetCharacterMovement()->MaxWalkSpeed = sprintSpeed;
}

void ATP_PlayerCharacter::StopSprint()
{
	bIsSprinting = false;
	//GetCharacterMovement()->MaxWalkSpeed = walkSpeed;
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

bool ATP_PlayerCharacter::CheckForWallJump(FHitResult& outWallHit)
{
	FVector traceStart = GetMesh()->GetBoneLocation(sphereCastPoint) + FVector(0, 0, 80);
	FVector traceEnd = traceStart + (GetActorForwardVector() * wallCheckDistance);
	TArray<AActor*> ignoredObjects;
	
	UKismetSystemLibrary::SphereTraceSingle(this, traceStart, traceEnd, wallCheckRadius, TraceTypeQuery1, false, ignoredObjects, EDrawDebugTrace::ForDuration, outWallHit, true);

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
	if(GetDisableMovement()) return;

	
	bStompStart = true;
	bIsStomping = true;
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
	
	
	UKismetSystemLibrary::SphereTraceSingle(this, traceStart, traceStart, 60.f, TraceTypeQuery1, false, ignoredObjects, EDrawDebugTrace::ForDuration, stompHit, true);

	if(stompHit.GetActor())
	{
		if(UKismetSystemLibrary::DoesImplementInterface(stompHit.GetActor(), UStompInterface::StaticClass()))
		{
			UE_LOG(LogTemp, Warning, TEXT("FOUND STOMP OBJECT"));
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

// Called every frame
void ATP_PlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	SetInterpMovementSpeed(DeltaTime);
	SetInterpFOV(DeltaTime);
	
	if(bIsStomping)
	{
		CheckForStompTarget();
	}
	
}

// Called to bind functionality to input
void ATP_PlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* enhancedInput = CastChecked<UEnhancedInputComponent>(PlayerInputComponent);

	if(enhancedInput)
	{
		enhancedInput->BindAction(moveAction, ETriggerEvent::Triggered, this, &ATP_PlayerCharacter::Move);

		enhancedInput->BindAction(jumpAction, ETriggerEvent::Started, this, &ATP_PlayerCharacter::PlayerJump);
		enhancedInput->BindAction(stopJumpAction, ETriggerEvent::Triggered, this, &ATP_PlayerCharacter::StopPlayerJump);
		
		enhancedInput->BindAction(lookAction, ETriggerEvent::Triggered, this, &ATP_PlayerCharacter::Look);

		enhancedInput->BindAction(sprintAction, ETriggerEvent::Triggered, this, &ATP_PlayerCharacter::StartSprint);
		enhancedInput->BindAction(stopSprintAction, ETriggerEvent::Triggered, this, &ATP_PlayerCharacter::StopSprint);

		enhancedInput->BindAction(stompAction, ETriggerEvent::Triggered, this, &ATP_PlayerCharacter::StartStomp);
	}
}

