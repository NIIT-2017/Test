#include <stdio.h>
#include "task1.h"
int main()
{
	int age = 0;
	printf("How old are you?\n");
	scanf("%d", &age);
	if (ageCheck(age)== 1)
		printf("Access granted\n");
	else
		printf("Access denied\n");
	return 0;
}