#include "Android/AndroidOnConnectionResult.h"

#if PLATFORM_ANDROID

#include "Engine.h"

JNI_METHOD void Java_ru_simlabs_stream_unreal_AndroidOnConnectionResult_resultResolver(JNIEnv *jenv, jobject thiz, jboolean result)
{
	if (result) {
		GEngine->AddOnScreenDebugMessage(-1, 200, FColor::Green, TEXT("Successful connection"));
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 200, FColor::Green, TEXT("Connection denied"));
	}
}
#endif

namespace SimlabsStream
{

bool FAndroidOnConnectionResult::isPresent = false;
bool FAndroidOnConnectionResult::lastResult = false;

FAndroidOnConnectionResult::FAndroidOnConnectionResult()
	: FJavaClassObject(FName("ru/simlabs/stream/unreal/AndroidOnConnectionResult"), "()V")
{
}

void FAndroidOnConnectionResult::SetResult(bool result)
{
	isPresent = true;
	lastResult = result;
}

bool FAndroidOnConnectionResult::GetLastResult()
{
	isPresent = false;
	return lastResult;
}

bool FAndroidOnConnectionResult::IsPresent()
{
	return isPresent;
}

}