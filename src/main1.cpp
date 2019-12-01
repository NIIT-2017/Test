#include "task1.h"
#include <stdio.h>

int main ()
{
	int age=0;
	printf ("How old are you? ");
	scanf ("%d", &age);
	if (ageCheck(age)==1)
		printf ("Access garanted!\n");
	else
		printf ("Access denied!\n");
	return 0;
}
