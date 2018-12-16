#include <stdio.h>
#include "task1.h"
int main()
{
	int age = 0;
	printf("please enter your age\n");
	scanf("%d", &age);
	if (ageCheck(age) == 0)
		printf("Access denied\n");
	else
		printf("Access granted\n");
	return 0;
}