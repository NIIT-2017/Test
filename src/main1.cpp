#include <stdio.h>
#include "Task1.h"

int main()
{
	int age = 0;
	printf("Hello!\nEnter your age please...\n");
	scanf("%d", &age);
	if (age >=18)
		{
			printf("Access granted!\nWelcome to our resource!\n");
			return 0;
		}
	else (age <=18);
		{
			printf("Access denided.\nSorry =(\n");
			return 0;
		}
	}