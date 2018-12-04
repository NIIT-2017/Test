#include "task4.h"
#include <stdio.h>

int main()
{
	int feet, inches;
	float cm;
	printf(" Enter feet'inches: ");
	scanf("%d'%d", &feet, &inches);
	printf("%.1f cm", convert(feet,inches));
	return 0;
}