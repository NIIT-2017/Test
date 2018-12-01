#include <stdio.h>
#include <stdlib.h>
#include "task1.h"
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int age;
	int res;
	printf("Enter age:");
	scanf_s("%d", &age);
	res = ageCheck(age);
	//printf("%d", res);
	if (res == 0)
		printf("access denied\n");
	else
		printf("access granted\n");
    system("pause");
	return 0;
 }