#include "task1.h"
//вторая должна быть из-за того, что есть scanf? которая небезопасна, и должна располагаться выше строчки с stdio.h//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	puts("What is your age?");
	int age = 0;
	scanf("%d", &age);
	int result = ageCheck(age);
	if (1==result) //Два равно это операция сравнения
		//надо спрашивать 1==result, так как можно поставить одно = и будет работать неправильно
		puts("Access granted");
	//можно использовать printf вместо puts. Но puts только со строками, а printf позволяет вывести что угодно
	else
		puts("Access denied");
	return 0;


}