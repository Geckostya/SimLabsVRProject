// Fill out your copyright notice in the Description page of Project Settings.

#include "StreamController.h"


// Sets default values
AStreamController::AStreamController()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}


// Called when the game starts or when spawned
void AStreamController::BeginPlay()
{
	Super::BeginPlay();
	
}

void AStreamController::BeginDestroy()
{
	Super::BeginDestroy();
	delete TextureUpdater;
	delete StreamCommander;
}

// Called every frame
void AStreamController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

