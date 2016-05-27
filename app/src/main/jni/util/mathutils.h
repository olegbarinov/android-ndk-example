#ifndef JNIEXAMPLE_MATHUTILS_H
#define JNIEXAMPLE_MATHUTILS_H

typedef struct {
	double (*Factorial)(double);
} MathUtilsNamespace;

extern MathUtilsNamespace const MathUtils;

#endif
