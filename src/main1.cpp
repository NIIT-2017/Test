#include <stdio.h>
#include <stdlib.h>
#include "task1.h"

int main()
{
	int age;
	int res;
	printf("Enter age:");
	scanf("%d", &age);
	res = ageCheck(age);
	//printf("%d", res);
	if (res == 0)
		printf("access denied\n");
	else
		printf("access granted\n");
	return 0;
 }