#include <jni.h>
#include <string.h>
#include "android/bitmap.h"

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_admin_jniutils_Jni_stringFromJNI(JNIEnv *env, jobject instance) {
    // TODO
    return env->NewStringUTF("世界如此美好，好你麻痹");
}
