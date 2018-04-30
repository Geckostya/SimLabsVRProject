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
	#include "../../../Core/Public/Android/AndroidApplication.h"
	#include "../../../Launch/Public/Android/AndroidJNI.h"
	#include <android/log.h>

	#define LOG_TAG "MY_LOG" // Used to print log with __android_log_print


	bool canSendByteBuffer = false;

	UMediaTexture* mediaTexture;
	JavaVM* jvm;
	jobject unrealConnection_obj;

	jmethodID decodeNextFrameID;
	jmethodID connectID;
	jmethodID disconnectID;
#endif

#if PLATFORM_ANDROID

	JNI_METHOD void Java_ru_simlabs_stream_BitmapRenderer_nativeClearCachedAttributeState(JNIEnv* jenv, jobject thiz, jint PositionAttrib, jint TexCoordsAttrib)
	{
		//Do nothing =(
		PRINT(TEXT("tried to call native bitmapRenderer method"));
	}

	JNI_METHOD void Java_ru_simlabs_stream_UnrealConnection_printToScreen(JNIEnv* jenv, jobject thiz, jstring str)
	{
		const char *nativeString = jenv->GetStringUTFChars(str, JNI_FALSE);
		FString fString(nativeString);
		GEngine->AddOnScreenDebugMessage(-1, 200, FColor::Green, fString);
		jenv->ReleaseStringUTFChars(str, nativeString);
	}

	JNI_METHOD void Java_ru_simlabs_stream_UnrealConnection_dataCallBack(JNIEnv* jenv, jclass clazz)
	{
		//UE_LOG(LogTemp, Warning, TEXT("DECODE NEXT FRAME"));
		canSendByteBuffer = true;
	}
#endif

	int AJavaCommunication::initEnvironment()
	{
		UE_LOG(LogTemp, Warning, TEXT("BEFORE ANDROID"));
#if PLATFORM_ANDROID
		//__android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, "### initEnvironment");  
		
		ENQUEUE_UNIQUE_RENDER_COMMAND(AndroidImageRender, {
			JNIEnv* javaEnvironment = FAndroidApplication::GetJavaEnv();
			javaEnvironment->GetJavaVM(&jvm);

			jclass testJNI_class = FAndroidApplication::FindJavaClass("ru/simlabs/stream/utils/TestJNI");
			if (!testJNI_class)
				UE_LOG(LogTemp, Warning, TEXT("JNI Test class not founded"));

			jclass unrealConnection = FAndroidApplication::FindJavaClass("ru/simlabs/stream/UnrealConnection");
			if (!unrealConnection)
				UE_LOG(LogTemp, Warning, TEXT("class not founded"));

			jmethodID constructor = javaEnvironment->GetMethodID(unrealConnection, "<init>", "(III)V");
			if (!constructor)
				UE_LOG(LogTemp, Warning, TEXT("constructor not founded"));
			int textureResource = 0;
			#if WITH_ENGINE
				mediaTexture->InitializeTextureSink(
					{ 1280, 720 },
					{ 1280, 720 },
					EMediaTextureSinkFormat::CharBGRA,
					EMediaTextureSinkMode::Unbuffered
				);
				textureResource = *reinterpret_cast<int*>(mediaTexture->GetTextureSinkTexture()->GetNativeResource());
			#elif
				UE_LOG(LogTemp, Warning, TEXT("Without Engine"));
			#endif
			unrealConnection_obj = javaEnvironment->NewGlobalRef(
				javaEnvironment->NewObject(
					unrealConnection, constructor, textureResource, mediaTexture->GetWidth(), mediaTexture->GetHeight()
				)
			);

			connectID = javaEnvironment->GetMethodID(unrealConnection, "connect", "(Ljava/lang/String;)V");
			disconnectID = javaEnvironment->GetMethodID(unrealConnection, "disconnect", "()V");
			decodeNextFrameID = javaEnvironment->GetMethodID(unrealConnection, "decodeNextFrame", "()V");

			/*char ip[256] = "ws://192.168.1.173";
			jstring ipstring = javaEnvironment->NewStringUTF(ip);
			javaEnvironment->CallVoidMethod(unrealConnection_obj, connectID, ipstring);
			UE_LOG(LogTemp, Warning, TEXT("called connect"));
			PRINT(TEXT("End init"));
			javaEnvironment->DeleteLocalRef(ipstring);*/
		});
		return JNI_OK;
	#endif
	return 0;
}

void AJavaCommunication::connect(FString host) {
#if PLATFORM_ANDROID
	UE_LOG(LogTemp, Warning, TEXT("called connect"));
	JNIEnv *javaEnvironment;
	jvm->AttachCurrentThread(&javaEnvironment, NULL);

	jstring j_host = javaEnvironment->NewStringUTF(TCHAR_TO_ANSI(*host));
	javaEnvironment->CallVoidMethod(unrealConnection_obj, connectID, j_host);
	javaEnvironment->DeleteLocalRef(j_host);
#endif
}

void AJavaCommunication::disconnect() {
#if PLATFORM_ANDROID
	UE_LOG(LogTemp, Warning, TEXT("called disconnect"));
	JNIEnv *javaEnvironment;
	jvm->AttachCurrentThread(&javaEnvironment, NULL);

	javaEnvironment->CallVoidMethod(unrealConnection_obj, disconnectID);
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
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AJavaCommunication::BeginPlay()
{
	Super::BeginPlay();
	initEnvironment();
}

// Called every frame
void AJavaCommunication::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	#if PLATFORM_ANDROID
		if (canSendByteBuffer)
		{
			ENQUEUE_UNIQUE_RENDER_COMMAND(AndroidSimLabsImageDecode, 
				{ 
					JNIEnv *javaEnvironment;
					jvm->AttachCurrentThread(&javaEnvironment, NULL);

					javaEnvironment->CallVoidMethod(unrealConnection_obj, decodeNextFrameID);
				});
		}
	#endif
}
