#include "task1.h"

#include <studio.h>

int main()
 {
    int age=0;
	printf("How old are you? ");
	scanf("%d", &age);
	int result=ageCheck(age);
	if(result==1)
	   printf("Access granted\n");
	 else
	   printf("Access denied\n");
	 return 0;
 }