#pragma once

#include "CoreMinimal.h"
#include "MediaTexture.h"
namespace SimlabsStream
{ 


class IStreamCommander
{
public:
    virtual ~IStreamCommander() = default;
    
    virtual void Connect(const FString &host) = 0;
    virtual void Disconnect() = 0;
	virtual bool IsConnected() = 0;
};

class IMediaTextureUpdater
{
public:
    virtual ~IMediaTextureUpdater() = default;
	
	virtual void UpdateTexture() = 0;
};

IStreamCommander *CreateStreamCommander(IMediaTextureUpdater *TextureUpdater);

IMediaTextureUpdater *CreateMediaTextureUpdater(UMediaTexture *MediaTexture,  int width, int height);

} // namespace SimlabsStream
