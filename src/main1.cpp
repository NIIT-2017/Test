#define _CRT_SECURE_NO_WARNINGS
#include "task1.h"
#include "stdio.h"

int main()
{
	int  age = 0;
	printf("Enter your age:\n");
	scanf("%d", &age);
	int result = ageCheck(age);
	if (result == 1) 
		printf("Access granted\n");
	else 
		printf("Access denied\n");
	return 0;
} 