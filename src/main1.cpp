//Test
#include "task1.h"
#include <stdio.h>

int main()
{
	int age = 0;
	puts("How are you old?");
	scanf("%d", &age);
	int result = ageCheck(age);
	
	if (result == 1)
	{
		printf("Access granted!");
	}
	else
	{
		printf("Access denied.");
	}
	return 0;
}
