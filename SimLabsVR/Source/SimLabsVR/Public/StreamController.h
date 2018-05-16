// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SimlabsStream.h"
#include "StreamController.generated.h"

UCLASS()
class SIMLABSVR_API AStreamController : public AActor
{
	GENERATED_BODY()
private:
	SimlabsStream::IMediaTextureUpdater *TextureUpdater;
	SimlabsStream::IStreamCommander *StreamCommander;
public:	
	// Sets default values for this actor's properties
	AStreamController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void BeginDestroy() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
