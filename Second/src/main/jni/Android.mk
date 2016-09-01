LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_LDLIBS := -lm -llog

LOCAL_MODULE := Jnizzl
LOCAL_SRC_FILES =: com_example_zzl_mysecondproject_MainActivity.cpp Sum.cpp

LOCAL_SHARED_LIBRARIES := liblog libcutils

include $(BUILD_SHARED_LIBRARY)