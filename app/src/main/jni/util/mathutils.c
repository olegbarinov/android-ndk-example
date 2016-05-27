#include "mathutils.h"
#include <math.h>

static double Factorial(double x) {
	return x < 0 ? NAN : tgamma(x + 1);
}

MathUtilsNamespace const MathUtils = { Factorial };
