#pragma once

#include "CoreMinimal.h"

namespace SimlabsStream
{ 


struct IStreamCommander
{
    virtual ~IStreamCommander() = default;
    
    virtual void Connect(const FString &host) = 0;
    virtual void Disconnect() = 0;
};

struct IMediaTextureUpdater
{
    virtual ~IMediaTextureUpdater() = default;
	
	virtual void UpdateTexture() = 0;
};

//IStreamCommander *CreateStreamCommander(/*decoder*/);

//IMediaTextureUpdater *CreateMediaTextureUpdater(/*texturesink*/);

} // namespace SimlabsStream
