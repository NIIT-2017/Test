#include <stdio.h>
#include "Task1.h"

int main()
{
	int Age = 0;
	scanf("%d", &Age);
	if (Age >= 18)
		printf("Access granted");
	else
		printf("Access denied");
	return 0;
}