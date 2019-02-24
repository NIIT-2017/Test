#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Header.h"

int main()
{
	int age = 0;
	printf("How old are you ?");
	scanf("%d", &age);
	if (ageCheck (age) == 0)
		printf("access denied\n");
	else
		printf("access granted\n");
	return 0;
}
