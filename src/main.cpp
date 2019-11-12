#include "task1.h"
#include<stdio.h>

int main()
{
	int age = 0;
	printf("Enter your age\n");
	scanf("%d",&age);
	int result = ageCheck(age);
	if(result ==1)
	printf("Acess Denied\n");
	else
	printf("Acess Granted\n");
	return 0;
}
