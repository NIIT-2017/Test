#include <stdio.h>
#include <task1.h>

int main()
{
	int age=0;
	printf("Hello, how old are you\n");
	scanf("%d",&age);

	if (ageCheck(age)==1)
		printf("Welcome\n");
	else 
		printf("Come when you grow up\n");

	return 0;
}