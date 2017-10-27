#include <stdio.h>
#include "task1.h"
 int main()
{
	int age;
	printf("Your age?");
	scanf("%d",&age);
		if(checkAge(age)==1)
			printf("Acces granted\n");
		else
			printf("Acces denied\n");
		return 0;
}