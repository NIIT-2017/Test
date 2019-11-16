#include "test01.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define TASK_2

#ifdef TASK_1
int main()
{
	double radius = 0;
	puts("Enter a radius:");
	scanf_s("%lf", &radius);
	printf("Volume of sphere is %.2lf\n",
		CalculateSphereVolume(radius));
	return 0;
}
#endif

#ifdef TASK_2
int main()
{
	double radius = 0;
	puts("Enter a radius:");
	scanf_s("%lf", &radius);
	printf("Area of circle %.2lf\n",
		3.14*radius*radius);
	return 0;
}
#endif