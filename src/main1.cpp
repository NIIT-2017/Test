#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"

int main()
{
	
	printf("How old are you?\n");
		
	int age = 0;
	scanf("%d", &age);
	age = ageCheck(age);
	(1==age) ? printf("Access granted") : printf("Access denied");
	
	return 0;
}