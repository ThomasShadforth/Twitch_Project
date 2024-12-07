// Fill out your copyright notice in the Description page of Project Settings.


#include "TP_AerialEnemy.h"

#include "TP_FlyingAIComponent.h"

ATP_AerialEnemy::ATP_AerialEnemy()
{
	flyingComponent = CreateDefaultSubobject<UTP_FlyingAIComponent>(TEXT("FlyingComponent"));
}

void ATP_AerialEnemy::BeginPlay()
{
	Super::BeginPlay();
}
