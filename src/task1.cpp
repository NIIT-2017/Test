#include "test01.h"
#define _USE_MATH_DEFINES
#include <math.h>

double CalculateSphereVolume(double radius)
{
	return (double) 4 / 3 * M_PI * pow(radius, 3);
}