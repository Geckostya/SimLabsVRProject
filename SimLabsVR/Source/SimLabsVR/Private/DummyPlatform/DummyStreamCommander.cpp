#include "DummyPlatform/DummyStreamCommander.h"

namespace SimlabsStream
{

#if !PLATFORM_ANDROID
IStreamCommander *CreateStreamCommander(IMediaTextureUpdater *TextureUpdater) 
{
	return new FDummyStreamCommander();
}
#endif

void SimlabsStream::FDummyStreamCommander::Connect(const FString & Host)
{}

void FDummyStreamCommander::Disconnect()
{}

bool FDummyStreamCommander::IsConnected()
{
	return false;
}

}