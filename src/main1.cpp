#include "Task1.h"

int main()
{
	int age;
	printf("How old are you? ");
	scanf("%d", &age);
	if (ageCheck(age) == 1) printf("Access granted\n");
	else printf("Access denied\n");
	return 0;
}