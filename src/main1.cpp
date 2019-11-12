#include "task1.h"
#include <stdio.h>
int main()
{
	int age;
	printf("Please, enter your age\n");
	scanf("%d", &age);
	int result = ageCheck(age);
	if (result == 1)
		printf("Access granted");
	else if (result == 0)
		printf("Access denied");
	return 0;
}