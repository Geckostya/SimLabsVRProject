package ru.simlabs.stream;

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
    private StreamCommander streamCommander;
    @NotNull
    private List<ByteBufferList> listOfByteBufferList = new LinkedList<>();
    private Lock lock = new ReentrantLock();

    public native void printToScreen(String text);

    public static native void dataCallBack();

    public UnrealConnection(int textureDest, final int weight, final int height) {
        BitmapRenderer btmRenderer = new BitmapRenderer(false);
        btmRenderer.updateFrameData(textureDest);
        final Surface surface = btmRenderer.getSurface();

        streamCommander = new StreamCommander(new Function0<StreamDecoder>() {
            @Override
            public StreamDecoder invoke() {
                return new StreamDecoder(false, surface, weight, height);
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
            List<ByteBufferList> toDecoder = listOfByteBufferList;
            Log.d("UnrealConnection", "decode pack of bytes: " + toDecoder.size());
            for (ByteBufferList byteBufferList : toDecoder) {
                Log.d("UnrealConnection", "decode list: " + byteBufferList.size());
                Log.d("UnrealConnection", "decode array: " + byteBufferList.getAllByteArray().length);

                streamCommander.getStreamDecoder().encodeNextFrame(byteBufferList);
                byteBufferList.recycle();
            }
        listOfByteBufferList = new LinkedList<>();
        lock.unlock();


    }

    public void disconnect() {
        streamCommander.disconnect();
    }

    public void putBytes(@Nullable ByteBufferList byteBufferList) {
        if (byteBufferList == null) {
            return;
        }
        Log.d("UnrealConnection", "put bytes " + byteBufferList.size());
        lock.lock();
            listOfByteBufferList.add(byteBufferList);
        lock.unlock();
    }

    public void test() {
        Log.d("UnrealConnection", "TEST!");
    }
}
