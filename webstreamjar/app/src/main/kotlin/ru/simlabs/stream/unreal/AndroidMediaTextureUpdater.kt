package ru.simlabs.stream.unreal

import android.view.Surface
import ru.simlabs.stream.StreamDecoder

class AndroidMediaTextureUpdater(private val width: Int, private val height: Int) : ()->StreamDecoder {
    private val bitmapRenderer: BitmapRenderer = BitmapRenderer(false)
    private var textureID: Int = -1

    init {
        bitmapRenderer.setSize(width, height)
    }

    fun setTextureID(textureID: Int) {
        this.textureID = textureID
    }

    override fun invoke(): StreamDecoder {
        return StreamDecoder(false, bitmapRenderer.surface, width, height)
    }

    fun updateTexture() {
        if (textureID != -1) {
            bitmapRenderer.updateFrameData(textureID)
        }
    }
}