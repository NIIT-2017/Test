#include <stdio.h>
#include "task1.h"

int main()
{
	int i = 0;
	printf("\nEnter your age: ");
	scanf("%d", &i);
	if (ageCheck(i) == 1)
	{
		printf("Access granted");
	}
	else
	{
		printf("Access denied");
	}
	
	return 0;
}