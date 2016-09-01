//
// Created by 张子龙 on 16/8/14.
//

#include "../../../../../../android-ndk-r11b/platforms/android-23/arch-arm/usr/include/jni.h"

#include "Sum.h"
#include <string.h>
#include <stdio.h>
#include <android/log.h>


#ifndef LOG_TAG
#define LOG_TAG "ANDROID_ZZL"
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)
#endif


extern "C" {

_jstring *Java_com_example_zzl_mysecondproject_MainActivity_getStringFromZZl(JNIEnv *env,

                                                                             jobject jobject) {

    Sum *sum = new Sum(30);
    int summer = sum->add();
    char *str = new char[10];
    sprintf(str, "ssssddssdds:%d", summer);

    LOGE("FOLLOW:%s",str);
    return env->NewStringUTF(str);
}


jstring Java_com_example_zzl_mysecondproject_MainActivity_getStringFromYing(JNIEnv *env,
                                                                            jobject jobject1,
                                                                            jstring jstring1) {

    const char  *a = env->GetStringUTFChars(jstring1, JNI_FALSE);
    char *str = new char[20];
    sprintf(str, "7777wu yu ying :%s!!!", a);

    return env->NewStringUTF(str);
}
}