#include"task1.h"
#include<stdio.h>
//#include<conio.h>
int main()
{
	int age=0;
	printf("Enter your age : \n");
	scanf_s("%d", &age);
	
	
	int checkAge(int age);
	if (checkAge(age) == 1)
		printf("Access granted");
	else
		printf("Access denied");

	//_getch();

	return 0;
}
