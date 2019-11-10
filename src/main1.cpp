#include "task1.h"
#include <stdio.h>

int main()

{
	int age = 0;
	printf("How old? \n");
	scanf("%d", &age);
	int result = ageCheck(age);

	if (result = 1)
		printf("Access grauted! \n");
	else
		printf("Access denied! \n");
	return 0;
}