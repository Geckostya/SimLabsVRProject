#include "Android/AndroidStreamCommander.h"
#include "Android/AndroidOnConnectionResult.h"

namespace SimlabsStream
{

#if PLATFORM_ANDROID
IStreamCommander *CreateStreamCommander(IMediaTextureUpdater *TextureUpdater) 
{
	return new FAndroidStreamCommander(reinterpret_cast<FAndroidMediaTextureUpdater*>(TextureUpdater));
}
#else
IStreamCommander *CreateStreamCommander(IMediaTextureUpdater *TextureUpdater)
{
	return nullptr;
}
#endif

FAndroidStreamCommander::FAndroidStreamCommander(FAndroidMediaTextureUpdater* MediaTextureUpdater)
	: FJavaClassObject(FName("ru/simlabs/stream/StreamCommander"), "(Lkotlin/jvm/functions/Function0;)V", MediaTextureUpdater->GetJObject())
	, ConnectMethod(GetClassMethod("connect", "(Ljava/lang/String;Lkotlin/jvm/functions/Function1;)V"))
	, DisconnectMethod(GetClassMethod("disconnect", "()V"))
	, GetConnectedMethod(GetClassMethod("getConnected", "()Z"))
	, UseDebugFrameMethod(GetClassMethod("useDebugFrame", "(Z)V"))
	, UseAutoBitrateMethod(GetClassMethod("useAutoBitrate", "(Z)V"))
	, ChangeSurfaceMethod(GetClassMethod("changeSurface", "(Landroid/view/Surface;II)V"))
{
}

void SimlabsStream::FAndroidStreamCommander::Connect(const FString & Host)
{
	CallMethod<void>(ConnectMethod, GetJString(Host), FAndroidOnConnectionResult().GetJObject());
}

void FAndroidStreamCommander::Connect(const FString &Host, jobject OnConnectionResult)
{
	CallMethod<void>(ConnectMethod, GetJString(Host), OnConnectionResult);
}

void FAndroidStreamCommander::Disconnect()
{
	CallMethod<void>(DisconnectMethod);
}

bool FAndroidStreamCommander::GetConnected()
{
	return CallMethod<bool>(GetConnectedMethod);
}

void FAndroidStreamCommander::UseDebugFrame(bool use)
{
	CallMethod<void>(UseDebugFrameMethod, use);
}

void FAndroidStreamCommander::UseAutoBitrate(bool use)
{
	CallMethod<void>(UseAutoBitrateMethod, use);
}

void FAndroidStreamCommander::ChangeSurface(jobject Surface, int width, int height)
{
	CallMethod<void>(ChangeSurfaceMethod, Surface, width, height);
}

}