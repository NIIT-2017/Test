#include<stdio.h>
#include "task3.h"
#define N 256

int main()
{
	char buf[N];
	double angle;
	char type;
	printf("Enter angle: ");
	scanf("%lf%c", &angle, &type);
	convert(buf, angle, type);
	printf("%s", buf);
	getchar();
	return 0;
}
