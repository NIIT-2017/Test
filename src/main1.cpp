#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "task1.h"


int main()

{
	int age = 0;

	     printf("Enter you age:  ");

	scanf("%d", &age);


	if (ageCheck(age) == 1)

	     printf("Access granted");

	else 

		 printf("Access denied");

	return 0;
}