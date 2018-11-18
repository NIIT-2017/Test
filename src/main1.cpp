#include <stdio.h>
#include "task1.h"

int main()
{
	int age = 0;
	scanf("%d", &age);
	if (ageCheck(int (age)) == 1)
		printf("Access granted");
	else
		printf("Access denied");
	return 0;
}