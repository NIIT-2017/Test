// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdio.h"
#include "task1.h"



int main()
{
	int age = 0;
	printf("¬ведите возраст/n");
	scanf("%d", age);
	printf(checkAge(age));
	return 0;
}

