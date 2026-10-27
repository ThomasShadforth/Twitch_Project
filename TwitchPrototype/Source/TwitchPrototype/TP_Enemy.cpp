// Fill out your copyright notice in the Description page of Project Settings.


#include "TP_Enemy.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystem/TPAttributeSet.h"
#include "AbilitySystem/TPBaseAbilitySystemComp.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
ATP_Enemy::ATP_Enemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	projectileFirePoint = CreateDefaultSubobject<USceneComponent>(TEXT("Projectile Fire Point"));
	projectileFirePoint->SetupAttachment(RootComponent);

	abilitySystemComp = CreateDefaultSubobject<UTPBaseAbilitySystemComp>(TEXT("Ability System Comp"));
	abilitySystemComp->SetIsReplicated(true);
	abilitySystemComp->SetReplicationMode(EGameplayEffectReplicationMode::Minimal);

	attributeSet = CreateDefaultSubobject<UTPAttributeSet>(TEXT("Attribute Set"));
	
	
}

void ATP_Enemy::Landed(const FHitResult& Hit)
{
	Super::Landed(Hit);

	if(bIsDying)
	{
		//To do: Visual effect for enemy death plays here
		//DestroyEnemy();
		PlayDeathAnim();
		//PlayDeathMontage(FName("Death"));
	}
}

void ATP_Enemy::KnockbackCharacter_Implementation(AActor* DamageCauser, float KnockbackModifier)
{
	ITPDamageInterface::KnockbackCharacter_Implementation(DamageCauser, KnockbackModifier);

	FVector knockbackDirection = GetActorLocation() - DamageCauser->GetActorLocation();
	knockbackDirection.Normalize();
	knockbackDirection.Z = 1.f;

	knockbackDirection *= KnockbackModifier;

	//GetCharacterMovement()->Velocity = knockbackDirection;
	GetCharacterMovement()->AddImpulse(knockbackDirection, true);
	//GEngine->AddOnScreenDebugMessage(0, 4.f, FColor::Red, FString::Printf(TEXT("APPLIED KNOCKBACK!")));
}

// Called when the game starts or when spawned
void ATP_Enemy::BeginPlay()
{
	Super::BeginPlay();

	SetEnemyController(GetController());

	if(GetEnemyController())
	{
		GetEnemyController()->RunBehaviorTree(GetBehaviourTree());
		GetEnemyController()->GetBlackboardComponent()->SetValueAsBool(TEXT("bCanAttack"), true);
	}

	InitAbilityActorInfo();

	if(UTPAttributeSet* tpAS = Cast<UTPAttributeSet>(attributeSet))
	{
		tpAS->healthZeroSignature.AddDynamic(this, &ATP_Enemy::HandleHealthZero);
	}

	GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_GameTraceChannel3, ECR_Ignore);
	GetMesh()->SetCollisionResponseToChannel(ECC_GameTraceChannel3, ECR_Ignore);
}

void ATP_Enemy::DestroyEnemy()
{
	Destroy();
}

void ATP_Enemy::InitAbilityActorInfo()
{
	Super::InitAbilityActorInfo();

	abilitySystemComp->InitAbilityActorInfo(this, this);
	Cast<UTPBaseAbilitySystemComp>(abilitySystemComp)->AbilityActorInfoSet();
	InitializeDefaultAttributes();
}

void ATP_Enemy::HandleHealthZero(UAttributeSet* InAttributeSet)
{
	UTPAttributeSet* tpAS = Cast<UTPAttributeSet>(InAttributeSet);
	
	if(InAttributeSet == attributeSet && tpAS->GetHealth() <= 0)
	{
		bIsDying = true;

		GetEnemyController()->GetBlackboardComp()->SetValueAsBool(FName("bIsDying"), true);
	}
}

void ATP_Enemy::PlayAttackMontage(FName SectionName, float PlayRate)
{
	UAnimInstance* animInstance = GetMesh()->GetAnimInstance();

	if(animInstance && attackMontage)
	{
		animInstance->Montage_Play(attackMontage, PlayRate);
		animInstance->Montage_JumpToSection(SectionName, attackMontage);
		
	}

	FTimerHandle attackTimer;
	int32 sectionIndex = attackMontage->GetSectionIndex(SectionName);
	float montageSectionTime = attackMontage->GetSectionLength(sectionIndex);
	
	bCanAttack = false;
	//GetWorldTimerManager().SetTimer(attackTimer, this, &ATP_Enemy::ResetCanAttack, attackWaitTime);
	GetWorldTimerManager().SetTimer(attackTimer, this, &ATP_Enemy::ResetCanAttack, montageSectionTime);

	if(enemyController)
	{
		enemyController->GetBlackboardComponent()->SetValueAsBool(TEXT("bCanAttack"), false);
		enemyController->GetBlackboardComponent()->SetValueAsBool(TEXT("bIsAttacking"), true);
	}
	
}


void ATP_Enemy::ResetCanAttack()
{
	bCanAttack = true;

	if(enemyController)
	{
		enemyController->GetBlackboardComponent()->SetValueAsBool(TEXT("bCanAttack"), true);
		enemyController->GetBlackboardComponent()->SetValueAsBool(TEXT("bIsAttacking"), false);
	}
	
}

void ATP_Enemy::ApplyGameplayEffectToTarget(AActor* TargetActor, TSubclassOf<UGameplayEffect> GameplayEffectClass)
{
	UAbilitySystemComponent* targetASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(TargetActor);

	if(targetASC == nullptr) return;

	check(GameplayEffectClass);

	FGameplayEffectContextHandle effectContextHandle = targetASC->MakeEffectContext();
	effectContextHandle.AddSourceObject(this);

	FGameplayEffectSpecHandle effectSpecHandle = targetASC->MakeOutgoingSpec(GameplayEffectClass, 1, effectContextHandle);
	const FActiveGameplayEffectHandle activeEffectHandle = targetASC->ApplyGameplayEffectSpecToSelf(*effectSpecHandle.Data.Get());
}

void ATP_Enemy::PlayDeathAnim()
{
	if(deathAnim == nullptr) return;
	
	GetMesh()->PlayAnimation(deathAnim, false);
	FTimerHandle deathHandle;
	float deathTime = deathAnim->GetPlayLength();

	GetWorldTimerManager().SetTimer(deathHandle, this, &ATP_Enemy::DestroyEnemy, deathTime);
	
}

void ATP_Enemy::PlayHitAnim()
{
	if(hitAnim == nullptr) return;

	GetMesh()->PlayAnimation(hitAnim, false);

	if(bIsDying) return;

	//FTimerHandle hitHandle;
	float hitTime = hitAnim->GetPlayLength();
	
}

void ATP_Enemy::PlayDeathMontage(FName SectionName, float PlayRate)
{
	UAnimInstance* animInstance = GetMesh()->GetAnimInstance();

	if(animInstance && deathMontage)
	{
		animInstance->Montage_Play(deathMontage, PlayRate);
		animInstance->Montage_JumpToSection(SectionName, deathMontage);
	}

	FTimerHandle deathHandle;
	int32 sectionIndex = deathMontage->GetSectionIndex(SectionName);
	float sectionTime = deathMontage->GetSectionLength(sectionIndex);
	
	GetWorldTimerManager().SetTimer(deathHandle, this, &ATP_Enemy::DestroyEnemy, sectionTime);
}


// Called every frame
void ATP_Enemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATP_Enemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

AAIPatrolPath* ATP_Enemy::GetPatrolRoute_Implementation()
{
	return ITPEnemyInterface::GetPatrolRoute_Implementation();
}

void ATP_Enemy::SetMoveSpeed_Implementation(EMoveSpeedTypes speedType)
{
	ITPEnemyInterface::SetMoveSpeed_Implementation(speedType);
}

bool ATP_Enemy::GetShouldActivatePerception_Implementation()
{
	if(bActivateAIPerception)
	{
		UE_LOG(LogTemp, Warning, TEXT("WILL ACTIVATE PERCEPTION"));
	} else
	{
		UE_LOG(LogTemp, Warning, TEXT("WILL DISABLE PERCEPTION"));
	}
	
	return bActivateAIPerception;
}

USceneComponent* ATP_Enemy::GetProjectileFirePoint_Implementation()
{
	return projectileFirePoint;
}

TSubclassOf<ATP_BaseProjectile> ATP_Enemy::GetEnemyProjectileClass_Implementation()
{
	return enemyProjectileClass;
}

float ATP_Enemy::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator,
	AActor* DamageCauser)
{

	DestroyEnemy();
	
	return DamageAmount;
}

void ATP_Enemy::DamageEnemy_Implementation()
{
	ITPEnemyInterface::DamageEnemy_Implementation();

	UE_LOG(LogTemp, Warning, TEXT("ENEMY IS BEING DAMAGED. KILL THEM"));
}

void ATP_Enemy::StompObject_Implementation(FHitResult hit)
{
	IStompInterface::StompObject_Implementation(hit);

	UE_LOG(LogTemp, Warning, TEXT("Enemy is being stomped. Handle as needed"));

	DestroyEnemy();
}

void ATP_Enemy::ObjectChargedInto_Implementation(AActor* ChargingActor, float knockbackModifier)
{
	ITPChargeInterface::ObjectChargedInto_Implementation(ChargingActor, knockbackModifier);

	UE_LOG(LogTemp, Warning, TEXT("Enemy has been charged into!"));

	//To Do: Calculate Knockback direction and apply force
	KnockbackCharacter_Implementation(ChargingActor, knockbackModifier);
	PlayHitAnim();
	
	bIsDying = true;

	GetEnemyController()->GetBlackboardComp()->SetValueAsBool(FName("bIsDying"), true);
	
	//DestroyEnemy();
}

void ATP_Enemy::SetStateAsPassive()
{
	if(!GetEnemyController()) return;

	GetEnemyController()->GetBlackboardComp()->SetValueAsEnum(FName("CurrentState"), (uint8)EEnemyAIStates::EEAIS_Passive);
}

void ATP_Enemy::SetStateAsAttack(AActor* attackTarget)
{

	UE_LOG(LogTemp, Warning, TEXT("METHOD CALLED: SET STATE AS ATTACK"));
	
	if(!GetEnemyController()) return;

	UE_LOG(LogTemp, Warning, TEXT("SETTING ATTACK TARGET AND STATE"));

	GetEnemyController()->GetBlackboardComp()->SetValueAsEnum(FName("CurrentState"), (uint8)EEnemyAIStates::EEAIS_Attack);
	GetEnemyController()->GetBlackboardComp()->SetValueAsObject(FName("PlayerTarget"), attackTarget);
}

void ATP_Enemy::SetStateAsCower(AActor* playerTarget)
{
	if(!GetEnemyController()) return;

	GetEnemyController()->GetBlackboardComp()->SetValueAsEnum(FName("CurrentState"), (uint8)EEnemyAIStates::EEAIS_Cower);
	GetEnemyController()->GetBlackboardComp()->SetValueAsObject(FName("PlayerTarget"), playerTarget);
}

void ATP_Enemy::SetStateAsRetreat()
{
	if(!GetEnemyController()) return;

	GetEnemyController()->GetBlackboardComp()->SetValueAsEnum(FName("CurrentState"), (uint8)EEnemyAIStates::EEAIS_Retreat);
	bIsRetreating = true;
}

EEnemyAIStates ATP_Enemy::GetCurrentState()
{
	return (EEnemyAIStates)GetEnemyController()->GetBlackboardComp()->GetValueAsEnum(FName("CurrentState"));
}

