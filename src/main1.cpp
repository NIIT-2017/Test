#include <stdio.h>
#include "task1.h"

int main()
{
	int age = 0;
	printf("enter your age:");
	scanf("%d", &age);
	if (ageCheck(age) == 0)
	{
		printf("Access denied");
	}
	else
	{
		printf("Access granted");
	}
		return 0;
}