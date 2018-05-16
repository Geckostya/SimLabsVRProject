#pragma once

#include "SimlabsStream.h"

namespace SimlabsStream
{ 

class FDummyMediaTextureUpdater
    : public IMediaTextureUpdater
{
public:
	void UpdateTexture() override;
};


} // namespace SimlabsStream
