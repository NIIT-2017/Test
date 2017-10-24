#include <stdio.h>
#include "task1.h"

int main(){
	int age;
	printf("Enter age: ");
	scanf("%i", &age);
	if (checkAge(age)==1){
		printf("Access granted");
	}else{
		printf("Access denied");
	}
	return 0;
}