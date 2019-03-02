#include<stdio.h>
#include"task1.h"

int main()
{
	int age;
	printf("How old are you?\n");
	scanf("%d", &age);
	if(ageCheck(age)==1)
		printf("Acces granted!");
	else
		printf("Acces denied!");
	return 0;
	
}