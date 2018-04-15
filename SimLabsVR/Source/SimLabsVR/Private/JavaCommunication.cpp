// Fill out your copyright notice in the Description page of Project Settings.

#include "JavaCommunication.h"
#include "simlabsVR.h"

#if PLATFORM_ANDROID
	#include "../../../Core/Public/Android/AndroidApplication.h"
	#include "../../../Launch/Public/Android/AndroidJNI.h"
	#include <android/log.h>

	#define LOG_TAG "MY_LOG" // Used to print log with __android_log_print

	//int jniValue = 0; // We will increment it later to check if the Java communication worked
	JNIEnv* javaEnvironment = NULL; // Will contain JNI when initialized
	//static jmethodID AndroidThunkJava_GetMessage; // Java function which will be called later
#endif

int AJavaCommunication::initEnvironment()
{
	UE_LOG(LogTemp, Warning, TEXT("BEFORE ANDROID"));
	#if PLATFORM_ANDROID
	//__android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, "### initEnvironment");
		/*
		// Initialise the Java environment
		
		if (!javaEnvironment) return JNI_ERR;

		// Initialise the java method which will be called from C++
		AndroidThunkJava_GetMessage = FJavaWrapper::FindMethod(javaEnvironment, FJavaWrapper::GameActivityClassID, "AndroidThunkJava_GetMessage", "()V", false);

		// Logs
		if (!AndroidThunkJava_GetMessage)
		{
			GEngine->AddOnScreenDebugMessage(-1, 200, FColor::Green, TEXT("ERROR GEngine: AndroidThunkJava_GetMessage not found"));
			UE_LOG(LogTemp, Log, TEXT("ERROR UE_LOG: AndroidThunkJava_GetMessage not found"));
			__android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, "ERROR __android_log_print: AndroidThunkJava_GetMessage not found");
			return JNI_ERR;
		}
		*/
		javaEnvironment = FAndroidApplication::GetJavaEnv();

		UE_LOG(LogTemp, Warning, TEXT("FINDING JENV"));
		if (!javaEnvironment) return JNI_ERR;

		UE_LOG(LogTemp, Warning, TEXT("FOUND JENV"));

		jclass testJNI_class = FAndroidApplication::FindJavaClass("ru/simlabs/stream/utils/TestJNI");
		if (!testJNI_class)
		{
			UE_LOG(LogTemp, Log, TEXT("ERROR UE_LOG: TestJNI not found"));
			//GEngine->AddOnScreenDebugMessage(-1, 200, FColor::Green, TEXT("ERROR GEngine: TestJNI not found"));
			//__android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, "ERROR __android_log_print: TestJNI not found");
			return JNI_ERR;
		}
		//FJavaWrapper::FindMethod()
		jmethodID constructor = javaEnvironment->GetMethodID(testJNI_class, "<init>", "()V");
		if (!constructor)
		{
			UE_LOG(LogTemp, Log, TEXT("ERROR UE_LOG: constructor not found"));
			return JNI_ERR;
		}
		jobject testJNI_object = javaEnvironment->NewObject(testJNI_class, constructor);

		jmethodID getMagicNumberID = javaEnvironment->GetMethodID(testJNI_class, "getMagicNumber", "()I");

		jint value = javaEnvironment->CallIntMethod(testJNI_object, getMagicNumberID);


		GEngine->AddOnScreenDebugMessage(-1, 200, FColor::Green, TEXT("Loading successful"));

		GEngine->AddOnScreenDebugMessage(-1, 200, FColor::Green, FString::Printf(TEXT("Magic number from kotlin: %d"), (int)value));
		

		return JNI_OK;

	#endif
	return 0;
}

// Sets default values
AJavaCommunication::AJavaCommunication()
{
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
