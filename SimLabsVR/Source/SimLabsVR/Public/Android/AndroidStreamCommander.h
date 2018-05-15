#pragma once

#include "SimlabsStream.h"
#include "AndroidMediaTextureUpdater.h"
#include "Android/AndroidJava.h"
#include "CoreMinimal.h"

namespace SimlabsStream
{

class FAndroidStreamCommander
	: public IStreamCommander
	, public FJavaClassObject
{
private:
	FJavaClassMethod ConnectMethod;
	FJavaClassMethod DisconnectMethod;
	FJavaClassMethod GetConnectedMethod;
	FJavaClassMethod UseDebugFrameMethod;
	FJavaClassMethod UseAutoBitrateMethod;
	FJavaClassMethod ChangeSurfaceMethod;

public:
	FAndroidStreamCommander(FAndroidMediaTextureUpdater* MediaTextureUpdater);

	void Connect(const FString &Host) override;
	void Connect(const FString &Host, jobject OnConnectionResult);
	void Disconnect() override;
	bool GetConnected();
	void UseDebugFrame(bool use);
	void UseAutoBitrate(bool use);
	void ChangeSurface(jobject Surface, int width, int height);
};


} // namespace SimlabsStream
