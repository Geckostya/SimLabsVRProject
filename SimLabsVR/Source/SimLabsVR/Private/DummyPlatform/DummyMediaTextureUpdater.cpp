#include "DummyPlatform/DummyMediaTextureUpdater.h"

namespace SimlabsStream
{

#if !PLATFORM_ANDROID
IMediaTextureUpdater *CreateMediaTextureUpdater(UMediaTexture *MediaTexture, int width, int height)
{
	return new FDummyMediaTextureUpdater;
}
#endif

void FDummyMediaTextureUpdater::UpdateTexture() 
{}

}