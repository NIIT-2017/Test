#include "task1.h"
#include <stdio.h>

int main ()
{
	int age;
	printf ("Enter your age: ");
	scanf ("%d",&age);
	if (checkAge(age) == 1)
		printf ("Access granted!\n");
	else 
		printf ("accesse denied!\n");
	return 0;
}