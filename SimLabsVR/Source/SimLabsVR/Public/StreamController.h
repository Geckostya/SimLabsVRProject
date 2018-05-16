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
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "Simlabs Stream")
		UMediaTexture* MediaTexture;
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "Simlabs Stream")
		int textureWidth;
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "Simlabs Stream")
		int textureHeight;

public:	
	// Sets default values for this actor's properties
	AStreamController();
	
	UFUNCTION(BlueprintCallable, Category = "Simlabs Stream")
		virtual void Init(UMediaTexture* NewMediaTexture, int width, int height);

	UFUNCTION(BlueprintCallable, Category = "Simlabs Stream")
		virtual void Connect(FString Host, FString Port);

	UFUNCTION(BlueprintCallable, Category = "Simlabs Stream")
		virtual void Disconnect();

protected:
	virtual void BeginPlay() override;
	virtual void BeginDestroy() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
