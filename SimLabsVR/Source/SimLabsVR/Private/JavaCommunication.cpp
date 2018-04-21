// Fill out your copyright notice in the Description page of Project Settings.

#include "JavaCommunication.h"
#include "GameFramework/Actor.h"
#include "simlabsVR.h"
#include "Runtime/Engine/Classes/Engine/ObjectLibrary.h"
#include "MediaTexture.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"

#define PRINT(t) GEngine->AddOnScreenDebugMessage(-1, 200, FColor::Green, t);

#if PLATFORM_ANDROID
	#include "../../../Core/Public/Android/AndroidApplication.h"
	#include "../../../Launch/Public/Android/AndroidJNI.h"
	#include <android/log.h>

	#define LOG_TAG "MY_LOG" // Used to print log with __android_log_print

	//int jniValue = 0; // We will increment it later to check if the Java communication worked
	JNIEnv* javaEnvironment = NULL; // Will contain JNI when initialized
	//static jmethodID AndroidThunkJava_GetMessage; // Java function which will be called later
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
#endif


int AJavaCommunication::initEnvironment()
{
	UE_LOG(LogTemp, Warning, TEXT("BEFORE ANDROID"));
	#if PLATFORM_ANDROID
	//__android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, "### initEnvironment");
		javaEnvironment = FAndroidApplication::GetJavaEnv();

		jclass testJNI_class = FAndroidApplication::FindJavaClass("ru/simlabs/stream/utils/TestJNI");
		if (testJNI_class)
			UE_LOG(LogTemp, Warning, TEXT("JNI Test class founded"))
		else
			UE_LOG(LogTemp, Warning, TEXT("JNI Test class not founded"));
		//Do some server magic!

		jclass unrealConnection = FAndroidApplication::FindJavaClass("ru/simlabs/stream/UnrealConnection");
		if (unrealConnection)
			UE_LOG(LogTemp, Warning, TEXT("class founded"))
		else 
			UE_LOG(LogTemp, Warning, TEXT("class not founded"));

		jmethodID constructor = javaEnvironment->GetMethodID(unrealConnection, "<init>", "()V");
		if (constructor)
			UE_LOG(LogTemp, Warning, TEXT("constructor founded"));
		jobject unrealConnection_obj = javaEnvironment->NewObject(unrealConnection, constructor);
		if (unrealConnection_obj)
			UE_LOG(LogTemp, Warning, TEXT("object created"));
		jmethodID connect = javaEnvironment->GetMethodID(unrealConnection, "connect", "(Ljava/lang/String;)V");
		if (connect)
			UE_LOG(LogTemp, Warning, TEXT("connect method is founded"));

		char ip[256] = "ws://192.168.1.173";
		jstring ipstring = javaEnvironment->NewStringUTF(ip);
		javaEnvironment->CallVoidMethod(unrealConnection_obj, connect, ipstring);
		UE_LOG(LogTemp, Warning, TEXT("called connect"));
		PRINT(TEXT("End init"));
		javaEnvironment->DeleteLocalRef(ipstring);
		return JNI_OK;

	#endif
	return 0;
}

// Sets default values
AJavaCommunication::AJavaCommunication()
{
	ConstructorHelpers::FObjectFinder<UMediaTexture> mediaTexture(TEXT("/Game/Movies/cubemap_videTexture"));
	UMediaTexture* texture = mediaTexture.Object;
	if (!texture) {
		UE_LOG(LogTemp, Warning, TEXT("Texture not founded"));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Texture founded!"));
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

	/*
	#if PLATFORM_ANDROID
	__android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, "### Tick");

		// If our environment and java method has been loaded
		if (AndroidThunkJava_GetMessage && javaEnvironment) {
			__android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, "### AndroidThunkJava_GetMessage && javaEnvironment loaded");

			// Call our java method in the xml file
			FJavaWrapper::CallVoidMethod(javaEnvironment, FJavaWrapper::GameActivityThis, AndroidThunkJava_GetMessage);

			// Will only print a value if our JNI worked
			if (jniValue > 0 && jniValue < 10)
				GEngine->AddOnScreenDebugMessage(-1, 200, FColor::Red, FString::FromInt(jniValue));
		}
		else
			__android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, "### AndroidThunkJava_GetMessage && javaEnvironment NOT loaded !");
	#endif
	*/
}

// #if PLATFORM_ANDROID
// extern "C" bool Java_com_epicgames_ue4_GameActivity_GetJNIData(JNIEnv* LocalJNIEnv, jobject LocalThiz, jint data)
// {
// 	jniValue += data; // data will contain 1
// 	return JNI_TRUE;
// }
// #endif
