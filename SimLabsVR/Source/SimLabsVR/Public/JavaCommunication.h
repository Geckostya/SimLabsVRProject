// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"

#if PLATFORM_ANDROID
#include "Android/AndroidMediaTextureUpdater.h"
#include "Android/AndroidStreamCommander.h"
#endif

#include "JavaCommunication.generated.h"

UCLASS()
class SIMLABSVR_API AJavaCommunication : public AActor
{
	GENERATED_BODY()

private:
	#if PLATFORM_ANDROID
	SimlabsStream::FAndroidMediaTextureUpdater *TextureUpdater;
	SimlabsStream::FAndroidStreamCommander *StreamCommander;
#endif
public:	
	// Sets default values for this actor's properties
	AJavaCommunication();

	UFUNCTION(BlueprintCallable, Category = "SimLabsServer")
		void SetBox(UStaticMeshComponent *Mesh);

	UFUNCTION(BlueprintCallable, Category = "SimLabsServer")
		void Connect(FString host);

	UFUNCTION(BlueprintCallable, Category = "SimLabsServer")
		void Disconnect();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
