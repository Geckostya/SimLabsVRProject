#include "Android/AndroidMediaTextureUpdater.h"
#include "Engine.h"
#include "RenderingThread.h"

namespace SimlabsStream
{

#if PLATFORM_ANDROID
IMediaTextureUpdater *CreateMediaTextureUpdater(UMediaTexture *MediaTexture, int width, int height)
{
	auto* TextureUpdater = new FAndroidMediaTextureUpdater(width, height);
	TextureUpdater->InitTexture(MediaTexture);
	return TextureUpdater;
}
#endif

FAndroidMediaTextureUpdater::FAndroidMediaTextureUpdater(int width, int height)
	: FJavaClassObject(FName("ru/simlabs/stream/unreal/AndroidMediaTextureUpdater"), "(II)V", width, height)
	, UpdateTextureMethod(GetClassMethod("updateTexture", "()V"))
	, SetTextureIDMethod(GetClassMethod("setTextureID", "(I)V"))
	, textureWidth(width)
	, textureHeight(height)
{
}

void FAndroidMediaTextureUpdater::InitTexture(UMediaTexture *MediaTexture)
{
	ENQUEUE_UNIQUE_RENDER_COMMAND_TWOPARAMETER(SimlabsStreamAndroidDecoderInitTexture,
		UMediaTexture*, Texture, MediaTexture,
		FAndroidMediaTextureUpdater*, This, this,
		{
			Texture->InitializeTextureSink(
				{ This->textureWidth, This->textureHeight },
				{ This->textureWidth, This->textureHeight },
				EMediaTextureSinkFormat::CharBGRA,
				EMediaTextureSinkMode::Unbuffered
			);
			int textureResource = *reinterpret_cast<int*>(Texture->GetTextureSinkTexture()->GetNativeResource());
			This->SetTextureID(textureResource);
		}
	);
}

void FAndroidMediaTextureUpdater::SetTextureID(int textureID) {
	CallMethod<void>(SetTextureIDMethod, textureID);
}

void FAndroidMediaTextureUpdater::UpdateTexture() {
	ENQUEUE_UNIQUE_RENDER_COMMAND_ONEPARAMETER(SimlabsStreamAndroidDecoderUpdateTexture,
		FAndroidMediaTextureUpdater*, This, this,
		{
			This->CallMethod<void>(This->UpdateTextureMethod);
		}
	);
}

}