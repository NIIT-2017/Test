#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include "task1.h"

int main()
{
	int age = 0;
	printf("Enter your age:");
	scanf("%d", &age);
	if (age >= 18)
		printf("Access granted");
	else
		printf("Access denied");
	return 0;


}