#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"task1.h"

int main()
{
	printf("How old are you?\n");
	int age;
	scanf("%d", &age);
	int result = ageCheck(age);
	if (result == 1)
		printf("Access granted!\n");
	else
		printf("Access denied!\n");
	return 0;

}