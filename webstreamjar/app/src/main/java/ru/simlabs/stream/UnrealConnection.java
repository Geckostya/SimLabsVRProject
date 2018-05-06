package ru.simlabs.stream;

import android.graphics.SurfaceTexture;
import android.media.MediaPlayer;
import android.util.Log;
import android.view.Surface;
import com.koushikdutta.async.ByteBufferList;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import org.jetbrains.annotations.NotNull;
import org.jetbrains.annotations.Nullable;

import java.util.LinkedList;
import java.util.List;
import java.util.concurrent.locks.Lock;
import java.util.concurrent.locks.ReentrantLock;

public class UnrealConnection {
    private final SurfaceTexture surfaceTexture;
    private final Surface surface;
    private StreamCommander streamCommander;
    @NotNull
    private List<byte[]> listOfByteBufferList = new LinkedList<>();
    private Lock lock = new ReentrantLock();

    public native void printToScreen(String text);

    public static native void dataCallBack();

    public UnrealConnection(int textureDest, final int width, final int height) {
//        BitmapRenderer btmRenderer = new BitmapRenderer(false);
//        if (!btmRenderer.isValid()) {
//            Log.e("UnrealConnection","Invalid bitmapRenderer");
//        }
//        boolean result = btmRenderer.updateFrameData(textureDest);
//        Log.d("UnrealConnection", "Update Frame result is: " + result);

//        surface = btmRenderer.getSurface();

        surfaceTexture = new android.graphics.SurfaceTexture(textureDest);
        //surfaceTexture.setOnFrameAvailableListener(this);
        surface = new android.view.Surface(surfaceTexture);

        Log.d("UnrealConnection", "Texture resource: " + textureDest);
        Log.d("UnrealConnection", "Width: " + width + "; height: " + height);

        streamCommander = new StreamCommander(new Function0<StreamDecoder>() {
            @Override
            public StreamDecoder invoke() {
                return new StreamDecoder(false, surface, width, height);
            }
        }, this);
    }

    public void connect(final String serverAddress) {
        printToScreen("In func connect");
        String copiedAddress = serverAddress + ":9002";//to prevent reference delete
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

    public synchronized void decodeNextFrame() {
        if (streamCommander.getStreamDecoder() == null) {
            return;
        }
        lock.lock();
            List<byte[]> toDecoder = listOfByteBufferList;
           // Log.d("UnrealConnection", "decode pack of bytes: " + toDecoder.size());
            listOfByteBufferList = new LinkedList<>();
        lock.unlock();
        for (byte[] byteArray : toDecoder) {
            //Log.d("UnrealConnection", "decode list: " + byteBufferList.size());
            //Log.d("UnrealConnection", "decode array: " + byteArray.length);

            streamCommander.getStreamDecoder().encodeNextFrame(byteArray);
            //byteBufferList.recycle();
        }

    }

    public void disconnect() {
        streamCommander.disconnect();
    }

    public void putBytes(@Nullable ByteBufferList byteBufferList) {
        if (byteBufferList == null) {
            return;
        }
        lock.lock();
            //Log.d("UnrealConnection", "put bytes " + byteBufferList.size());
            listOfByteBufferList.add(byteBufferList.getAllByteArray());
        lock.unlock();
    }

    public void test() {
        Log.d("UnrealConnection", "TEST!");
    }
}
