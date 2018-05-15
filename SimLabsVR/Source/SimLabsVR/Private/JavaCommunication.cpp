// Fill out your copyright notice in the Description page of Project Settings.

#include "JavaCommunication.h"
#include "GameFramework/Actor.h"
#include "simlabsVR.h"
#include "Engine.h"
#include "Runtime/Engine/Classes/Engine/ObjectLibrary.h"
#include "MediaTexture.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"

#define PRINT(t) GEngine->AddOnScreenDebugMessage(-1, 200, FColor::Green, t);

#if PLATFORM_ANDROID
	UMediaTexture* mediaTexture;
#endif

#if PLATFORM_ANDROID

	JNI_METHOD void Java_ru_simlabs_stream_BitmapRenderer_nativeClearCachedAttributeState(JNIEnv* jenv, jobject thiz, jint PositionAttrib, jint TexCoordsAttrib)
	{
		//Do nothing =(
		PRINT(TEXT("tried to call native bitmapRenderer method"));
	}
#endif


void AJavaCommunication::Connect(FString host) {
#if PLATFORM_ANDROID
	UE_LOG(LogTemp, Warning, TEXT("called connect"));
	StreamCommander->Connect(host.Append(TEXT(":9002")));
#endif
}

void AJavaCommunication::Disconnect() {
#if PLATFORM_ANDROID
	UE_LOG(LogTemp, Warning, TEXT("called disconnect"));
	StreamCommander->Disconnect(); 
#endif
}

// Sets default values 
AJavaCommunication::AJavaCommunication()
{
	static ConstructorHelpers::FObjectFinder<UMediaTexture> mediaTexture(TEXT("/Game/Movies/cubemap_videTexture.cubemap_videTexture"));
	if (mediaTexture.Succeeded()) {
		UE_LOG(LogTemp, Warning, TEXT("Texture founded!"));
		UMediaTexture* texture = mediaTexture.Object;
		if (!texture) {
			UE_LOG(LogTemp, Warning, TEXT("Everything is bad!"));
		} else {
			#if PLATFORM_ANDROID
				::mediaTexture = texture;
			#endif
		}
	}

#if PLATFORM_ANDROID
	// 	UE_LOG(LogTemp, Warning, TEXT("Before creating TextureUpdater!"));
	TextureUpdater = new SimlabsStream::FAndroidMediaTextureUpdater(1920, 1280);
	// 	UE_LOG(LogTemp, Warning, TEXT("Before InitTexture!"));
	TextureUpdater->InitTexture(::mediaTexture);

	// 	UE_LOG(LogTemp, Warning, TEXT("Before creating StreamCommander!"));
	StreamCommander = new SimlabsStream::FAndroidStreamCommander(TextureUpdater);

#endif

	PrimaryActorTick.bCanEverTick = true;

}

void AJavaCommunication::SetBox(UStaticMeshComponent *Mesh)
{
	
}

// Called when the game starts or when spawned 
void AJavaCommunication::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AJavaCommunication::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
#if PLATFORM_ANDROID
		UE_LOG(LogTemp, Warning, TEXT("in Tick"));
		TextureUpdater->UpdateTexture();
#endif
}
