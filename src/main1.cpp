#include "task1.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int age = 0;
	printf("how old are you?\n");
	scanf("%d",&age);
	int result = ageCheck(age);
	if (result == 1)
		printf("access granted!\n");
	else
		printf("access denied!\n");
	return 0;
	}