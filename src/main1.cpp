#include <stdio.h>
#include "task1.h"

int main()
{
	int age = 0;
	printf("How old are you? ");
	scanf("%d", &age);
	int result = ageCheck(age);
	printf("%s\n", result == 0 ? "Access denied" : "Access granted");

	return 0;

}