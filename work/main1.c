#include "task1.h"
#include <stdio.h>

int main()
{
	int age;
	printf("enter your age: ");
	scanf("%d",&age);
	if(checkAge(age)==1)
		printf("Access granted");
	else
		printf("Access denied");
	return 0;
}