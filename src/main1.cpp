#include "test1.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{	
	int age;
	printf("Input your age: ");
	scanf("%d", &age);
	printf("%d\n", ageCheck(age));
	return 0;
}