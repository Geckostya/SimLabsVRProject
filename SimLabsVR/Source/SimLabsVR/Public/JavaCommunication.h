// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "SimlabsStream.h"
#include "JavaCommunication.generated.h"

UCLASS()
class SIMLABSVR_API AJavaCommunication : public AActor
{
	GENERATED_BODY()

private:
	SimlabsStream::IMediaTextureUpdater *TextureUpdater;
	SimlabsStream::IStreamCommander *StreamCommander;
public:	
	// Sets default values for this actor's properties
	AJavaCommunication();

	UFUNCTION(BlueprintCallable, Category = "Simlabs Stream")
		void SetBox(UStaticMeshComponent *Mesh);

	UFUNCTION(BlueprintCallable, Category = "Simlabs Stream")
		void Connect(FString host);

	UFUNCTION(BlueprintCallable, Category = "Simlabs Stream")
		void Disconnect();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
