#include <jni.h>
#include <string.h>
#include <android/bitmap.h>
#include <android/log.h>

#ifndef LOG_TAG
#define LOG_TAG "MDL"
#endif
#ifndef log
#define log(...) __android_log_print(ANDROID_LOG_INFO,LOG_TAG,__VA_ARGS__);
#endif

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_admin_jniutils_Jni_stringFromJNI(JNIEnv *env, jobject instance) {
    // TODO
    return env->NewStringUTF("世界如此美好，好你麻痹");
}


extern "C"
JNIEXPORT void JNICALL
Java_com_example_admin_jniutils_Jni_convertBitmap(JNIEnv *env, jobject instance, jobject bitmap) {
    // TODO
    AndroidBitmapInfo info ;
    int error = AndroidBitmap_getInfo(env, bitmap, &info);
    void *addrPtr ;
    if (error == 0) {
        log("width = %d ,height = %d ,format = %d , stride = %d ", info.width, info.height ,info.format, info.stride);
        int result = AndroidBitmap_lockPixels(env,bitmap,&addrPtr);
        if(result == 0){
            log("分配成功");
            
        }else {
            log("分配失败 错误码 = %d" , result);
        }
    } else {
        log("error: %d ", error);
    }
}
