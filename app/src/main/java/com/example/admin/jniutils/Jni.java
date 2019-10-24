package com.example.admin.jniutils;

import android.graphics.Bitmap;
import android.util.Log;

public class Jni {

    static {
        Log.i("MDL","so库加载");
        System.loadLibrary("native-lib");
    }

    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */
    public native String stringFromJNI();
    public native void convertBitmap(Bitmap bitmap);

}
