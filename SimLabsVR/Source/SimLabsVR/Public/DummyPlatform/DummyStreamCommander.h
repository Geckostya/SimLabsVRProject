#pragma once

#include "SimlabsStream.h"
#include "DummyMediaTextureUpdater.h"

namespace SimlabsStream
{

class FDummyStreamCommander
	: public IStreamCommander
{
public:
	void Connect(const FString &Host) override;
	void Disconnect() override;
	bool IsConnected() override;
};


} // namespace SimlabsStream
