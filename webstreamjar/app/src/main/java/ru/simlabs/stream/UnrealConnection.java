package ru.simlabs.stream;

import android.util.Log;
import android.view.Surface;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;

public class UnrealConnection {
    private StreamCommander streamCommander;

    public native void printToScreen(String text);

    public UnrealConnection(int textureDest) {
        BitmapRenderer btmRenderer = new BitmapRenderer(false);
        btmRenderer.updateFrameData(textureDest);
        final Surface surface = btmRenderer.getSurface();

        streamCommander = new StreamCommander(new Function0<StreamDecoder>() {
            @Override
            public StreamDecoder invoke() {
                return new StreamDecoder(false, surface, 1920, 1080);
            }
        });
    }

    public void connect(final String serverAddress) {
        printToScreen("In func connect");
        String copiedAddress = serverAddress;//to prevent reference delete
        printToScreen(serverAddress);
        streamCommander.connect(copiedAddress, new Function1<Boolean, Unit>() {
            @Override
            public Unit invoke(Boolean success) {
                if (success) {
                    Log.d("UnrealConnection", "Successful connection");
                    printToScreen("Successful connection");
                } else {
                    Log.d("UnrealConnection", "Failed connection");
                }
                return Unit.INSTANCE;
            }
        });
    }

}
