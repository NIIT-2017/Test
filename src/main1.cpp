#include "task1.h"
#include <stdio.h>

int main()
{
	int age = 0;
	printf("How old are you: ");
	scanf("%d", &age);
	if (ageCheck(age))
		printf("Access sucsesful");
	else
		printf("Access denied");
	return 0;
}
