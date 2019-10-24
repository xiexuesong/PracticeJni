package com.example.admin.practicejni;

import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.widget.ImageView;
import android.widget.Toast;

import com.example.admin.jniutils.Jni;

public class MainActivity extends AppCompatActivity {

    private ImageView iv;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        iv = findViewById(R.id.iv);
        Bitmap bitmap = BitmapFactory.decodeResource(getResources(), R.mipmap.test);
        if(bitmap != null) {
            Jni jni = new Jni();
            jni.stringFromJNI();
            jni.convertBitmap(bitmap);
        }else {
            Log.i("MDL","图片为空");
        }
    }



}
