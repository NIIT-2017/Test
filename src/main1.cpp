#include "task1.h"
#include <stdio.h>
#pragma warning(disable : 4996)
int main()
{
	printf("How old are you ? ");
	int age=0;
	scanf("%d", &age);
	if (ageCheck(age) == 1)
		printf("Access grated");
	else
		printf("Access denied");
	return 0;
}