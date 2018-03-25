// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestClass.generated.h"

UCLASS()
class SIMLABSVR_API ATestClass : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATestClass();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Visible/Edit + DefaultsOnly/Anywhere ; Blueprint + ReadWrite/ReadOnly
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "My Variables")
		int someInt;
	
};
