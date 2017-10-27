#include <stdio.h>
#include "task1.h"
int main()
{
	int age;
	printf("Enter your age:  ");
	scanf("%d", &age);
	if (checkAge(age))
		printf("Access granted \n");
	else
		printf("Access denied \n");
	return 0;
}