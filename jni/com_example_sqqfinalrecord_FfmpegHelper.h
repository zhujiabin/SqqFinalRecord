/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_example_sqqfinalrecord_FfmpegHelper */

#ifndef _Included_com_example_sqqfinalrecord_FfmpegHelper
#define _Included_com_example_sqqfinalrecord_FfmpegHelper
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_example_sqqfinalrecord_FfmpegHelper
 * Method:    init
 * Signature: ([B)I
 */
JNIEXPORT jint JNICALL Java_com_example_sqqfinalrecord_FfmpegHelper_init
  (JNIEnv *, jclass, jbyteArray);

/*
 * Class:     com_example_sqqfinalrecord_FfmpegHelper
 * Method:    start
 * Signature: ([B)I
 */
JNIEXPORT jint JNICALL Java_com_example_sqqfinalrecord_FfmpegHelper_start
  (JNIEnv *, jclass, jbyteArray);

/*
 * Class:     com_example_sqqfinalrecord_FfmpegHelper
 * Method:    startAudio
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_example_sqqfinalrecord_FfmpegHelper_startAudio
  (JNIEnv *, jclass, jbyteArray,jint);//jshortArray

/*
 * Class:     com_example_sqqfinalrecord_FfmpegHelper
 * Method:    flush
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_example_sqqfinalrecord_FfmpegHelper_flush
  (JNIEnv *, jclass);

/*
 * Class:     com_example_sqqfinalrecord_FfmpegHelper
 * Method:    close
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_example_sqqfinalrecord_FfmpegHelper_close
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
