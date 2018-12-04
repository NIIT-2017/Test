#define _USE_MATH_DEFINES
#include<math.h>
#include<stdio.h>


char convert(char buf[], double angle, char type)
{
	if (type == 'D')
	{
		return sprintf(buf, "%lf %c", ((angle*M_PI) / 180), 'R');
	}
	else
	{
		return sprintf(buf, "%lf %c", ((angle*180) / M_PI), 'D');
	}
}
