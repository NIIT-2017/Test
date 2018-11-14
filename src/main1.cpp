#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include "task1.h"

int main()
{
	int age = 0;

	printf("Enter your age:");

	scanf("%d", &age);

	if (age >= 18)

		printf("Access granted\n");
	else

		printf("Access denied\n ");
	
	return 0;

}