#include <stdio.h>
#include "Task1.h"

int main()
{
	int AGE = 0;
	scanf("%d", &AGE);
	if (AGE >= 18)
		printf("Access granted");
	else
		printf("Access denied");
	return 0;
}