#include <jni.h>

// A simple C function that returns a greeting string to Android
JNIEXPORT jstring JNICALL
Java_com_example_myapp_MainActivity_stringFromC(JNIEnv* env, jobject thisObj) {
    
    // In pure C, env is a pointer to a pointer, so we call it like this:
    return (*env)->NewStringUTF(env, "Hello from pure C inside the NDK!");
}

