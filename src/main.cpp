#include <stdio.h>
#include "task1.h"

int main()
{
	int age = 0;
	printf("enter your age:");
	scanf_s("%d", &age);
	if (ageCheck(age) == 1)
	{
		printf("Access denied");
	}
	else
	{
		printf("Access granted");
	}
	return 0;
}