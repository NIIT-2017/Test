#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int age = 0;
	printf("How old are you? ");
	int result=scanf("%d", &age);
	if (result == 0 || age<=0 || age >150)
	{
		printf("Age is incorrect!\n");
		return 1;
	}
	printf("Good! You're %d years old!\n", age);
	return 0;
}