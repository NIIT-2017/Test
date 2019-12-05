#include "task1.h"
#include "stdio.h"

int main()
{
	int  age= 0;
	puts("enter your age:\n");
	scanf_s("%d", &age);
	int result = ageCheck(age);
	if (result == 0) printf("Access granted\n");
	else printf("Access denied\n");
}