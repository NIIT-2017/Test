#include <stdio.h>
#include "task1.h"

int main()
{
	int age = 0;
	printf("Hello, enter you age:");
	scanf("%d", &age);
	printf("%d", checkAge(age));
	return 0;
}