#include <stdio.h>
#include "task1.h"

int main()
{
	int age;
	printf("Enter your age\n");
	scanf("%d", &age);

	int result = ageCheck(age);

	if (result == 1)
		printf("Access granted");
	else if (result == 0)
		printf("Access denied");
	return 0;
}
