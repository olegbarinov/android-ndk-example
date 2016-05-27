#include <jni.h>
#include "util/mathutils.h"

JNIEXPORT jdouble JNICALL
Java_barinov_jniexample_MainActivity_factorial(JNIEnv *env, jobject instance, jdouble x) {
	return MathUtils.Factorial(x);
}
