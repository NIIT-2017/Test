#include <stdio.h>
#include "Task1.h"

int main()
{
	int age = 0;
	scanf("%d", &age);
	if (age >= 18)
		printf("Access granted");
	else
		printf("Access denied");
	return 0;
}