#include <stdio.h>
#include "task1.h"
int main()
{
	int age = 0;
	scanf("%d", &age);
	if (ageCheck(age) == 1)
		printf("Access granted");
	if (ageCheck(age) == 0)
		printf("Access denied");
	return 0;
}
