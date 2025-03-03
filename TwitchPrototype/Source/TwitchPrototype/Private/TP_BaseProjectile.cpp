// Fill out your copyright notice in the Description page of Project Settings.


#include "TP_BaseProjectile.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "GameFramework/ProjectileMovementComponent.h"

// Sets default values
ATP_BaseProjectile::ATP_BaseProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	projectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement"));
	
}

// Called when the game starts or when spawned
void ATP_BaseProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

void ATP_BaseProjectile::ApplyGameplayEffectToTarget(AActor* TargetActor,
	TSubclassOf<UGameplayEffect> GameplayEffectClass)
{
	UAbilitySystemComponent* targetASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(TargetActor);

	if(targetASC == nullptr) return;

	UE_LOG(LogTemp, Warning, TEXT("ASC FOUND ON TARGET!!"));
	
	check(GameplayEffectClass);
	FGameplayEffectContextHandle effectContextHandle = targetASC->MakeEffectContext();
	effectContextHandle.AddSourceObject(this);

	FGameplayEffectSpecHandle effectSpecHandle = targetASC->MakeOutgoingSpec(GameplayEffectClass, 1, effectContextHandle);
	const FActiveGameplayEffectHandle activeEffectHandle = targetASC->ApplyGameplayEffectSpecToSelf(*effectSpecHandle.Data.Get());
}

// Called every frame
void ATP_BaseProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

