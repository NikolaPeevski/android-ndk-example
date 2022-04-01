//
// Created by Nikola Peevski on 01/04/2022.
// https://docs.oracle.com/javase/7/docs/technotes/guides/jni/spec/types.html
// Explore the jni.h for more interesting methods

#include <cstring>
#include <jni.h>

extern "C"
JNIEXPORT jint JNICALL
Java_com_example_potato_MainActivity_echo(JNIEnv *env, jobject thiz, jint width, jint height) {
    // TODO: implement echo()
    return width * height;
}
extern "C"
JNIEXPORT jint JNICALL
Java_com_example_potato_MainActivity_echoObj(JNIEnv *env, jobject thiz, jobject rect) {
    jclass cls = (*env).FindClass( "com/example/potato/Rectangle");
    jfieldID widthFid = (*env).GetFieldID(cls, "width", "I");
    jint width = (*env).GetIntField(rect, widthFid);

    jfieldID heightFid = (*env).GetFieldID(cls, "height", "I");
    jint height = (*env).GetIntField(rect, heightFid);

    return width * height;
}