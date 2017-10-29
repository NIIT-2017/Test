#define _CRT_SECURE_NO_WARNINGS
#include"task1.h"
#include<stdio.h>
//#include<conio.h>

int main()
{
	int age=0;
	printf("Enter your age : \n");
	scanf("%d", &age);
	
	
	int checkAge(int age);
	/*if (scanf("%d", &age) == 0)
	{
		printf("Data error");
		return 1;
	}*/
	if (checkAge(age) == 1)
		printf("Access granted");
	else
		printf("Access denied");

	//_getch();

	return 0;
}
