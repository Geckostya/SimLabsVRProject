#pragma once

#include "SimlabsStream.h"
#include "MediaTexture.h"
#include "Android/AndroidJava.h"
#include "CoreMinimal.h"

namespace SimlabsStream
{ 

class FAndroidMediaTextureUpdater
    : public IMediaTextureUpdater
	, public FJavaClassObject
{
private:
	FJavaClassMethod UpdateTextureMethod;
	FJavaClassMethod SetTextureIDMethod;

	int textureWidth;
	int textureHeight;

public:
	FAndroidMediaTextureUpdater(int width, int height);
	
	void InitTexture(UMediaTexture *MediaTexture);

	void UpdateTexture() override;
	void SetTextureID(int textureID);
};


} // namespace SimlabsStream
