#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"

int main()
{
	int age = 0;
	printf("Enter your age, pls: ");
	scanf("%d", &age);
	if (checkAge(age) == 1)
		printf("Access granted\n");
	else
		printf("Access denied\n");
	return 0;
}