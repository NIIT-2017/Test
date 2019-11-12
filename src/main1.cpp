#include "task1.h"
#include <stdio.h>

int main()
	{
	int age=0;
	printf("how old are you? ");
	scanf("%d",&age);
	int result=agechesk(age);
	if (result==1)
		printf("acces granted!\n");
	else
		printf("acces denied!\n");
	return 0;
