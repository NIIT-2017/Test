#include <stdio.h>
#include "task1.h"

int main()
{
	int Age;
		printf ("Enter your age");
		scanf ("%d",&Age);
		if (CheckAge(Age) == 1)
			printf("Access granted");
		else
			printf("Access denied");
		return 0;
}