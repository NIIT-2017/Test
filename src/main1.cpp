#include <stdio.h>
#include "task1.h"

int main()
{
	int age = 0;
	printf("Hello!\nEnter your age please...\n");
	scanf("%d", &age);
	if (ageCheck(age) == 1)
		{
			printf("Access granted!\nWelcome to our resource!\n");
		}
	else
		{
			printf("Access denided.\nSorry =(\n");
		}
	return 0;
	}