#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"

int main()
{
	
		printf("Vvedite vozrast\n");
		int age = 0;
		scanf("%d", &age);
		int result = ageCheck(age);
		if (1 == result) // при сравнении единица слева!!!
		{
			puts("Access granted");
		}
		else
		{
			puts("Access denied");
		}

		return 0;
	
	
}