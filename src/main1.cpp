#include "task1.h"
#include "conio.h"
#include "iostream"
#include "stdio.h"


void main(){
	int age;
	printf("Enter your age\n");
	scanf("%d", &age);
	if (ageCheck(age) == 1){
		printf("Access granted");
	}
	else{
		printf("Access denied");
	}
	getch();
}
