#include <stdio.h>     
#include "task1.h"     



int main(void)                  
{                               
	int age ;
	printf("Hello, enter your age ");
	scanf("%d", &age);
	printf("So, You are %d years old \n", age);
	
	if (ageCheck(age)==1)
		printf("Access granted \n\n");
	else
		printf("Access denied \n\n");
return 0;                  
}                              