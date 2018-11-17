#define _CRT_SECURE_NO_WARNINGS
#include "task1.h"
#include <stdio.h>

int main()
{
	puts("What is your age?");
	int age = 0;
	scanf("%d", &age);

	/*int result = ageCheck(age);
	if (result == 1)
		puts("Access granted");
	else 
		puts("Access denied");*/

	if (ageCheck(age))
		puts("Access granted");
	else
		puts("Access denied");

	return 0;
}