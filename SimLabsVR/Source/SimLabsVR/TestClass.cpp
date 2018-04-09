// Fill out your copyright notice in the Description page of Project Settings.

#include "TestClass.h"
#include <EngineGlobals.h>
#include <Runtime/Engine/Classes/Engine/Engine.h>

// Sets default values
ATestClass::ATestClass()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestClass::BeginPlay()
{
	Super::BeginPlay();
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "debug msg from cpp!");
}

// Called every frame
void ATestClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

