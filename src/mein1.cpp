#define _CRT_SECURE_NO_WARNINGS
#include "task1.h"
#include <stdio.h>

int main()
{
	int age = 0;
	printf("How old are you? ");
	scanf_s("%d", &age);
	int result = ageCheck(age);
		if (result == 1)
		printf("Access garanted!\n");
	else
		printf("Access denied!\n");
	return 0;
}
