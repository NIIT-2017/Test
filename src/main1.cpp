#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"

void clean_stdin(void)//защита от дурака, вводящего символы
{
	int c = 0;
	do {
		c = getchar();
	} while (c != '\n' && c != EOF);
}


int main()
{
	int age = 0;
	
	while (1)
	{
		printf("How old are you?");
		int result = scanf("%d", &age);
		if (result == 0 || age <= 0 || age > 150)//защита от дурака, вводящего цифры
		{
			printf("Age is incorrect!\n");
			clean_stdin();
		}
		else
			break;
	}

	ageCheck(age);
	if (ageCheck(age)==1)
	printf("Access granted\n");
	else printf("Access denied\n");

	getchar();
	getchar();
	return 0;
}
