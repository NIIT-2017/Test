#define _CRT_SECURE_NO_WARNINGS
#include "task1.h"
#include <stdio.h>

int main(){
	puts("what is your age?");
	int age = 0;
	scanf("%d", &age);
	int result = ageCheck(age);
	if (1 == result)
		puts("Access granted");
	else
		puts("Access denied");
	return 0;
}