#include <stdio.h>
#include "task1_1.h"

int main()
{
	int age = 0;
	printf("Hello, enter you age:");
	scanf("%d", &age);
	printf("%d", ageCheck(age));
	return 0;
}