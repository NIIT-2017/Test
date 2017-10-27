#Include <stdio.h>
#Include "task1.h"

int main()
{
	int Age;
		printf("Enter your age/n");
		scanf(%d, &Age);
		if (CheckAge(Age) == 1)
			Printf("Access granted/n");
		else
			printf("Access denied/n");
		return 0;
}