#include <stdio.h>
#include "task.h"

int main()
{
	int age = 0;
	printf("Enter your age: ");
	scanf("%d", &age);

	int result = ageCheck(age);
	if (result == 1)
		printf("Access granted\n");
	else if (result == 0)
		printf("Access denied\n");
	else if (result == -1)
		printf("Age is incorrect!\n");
	return 0;
}