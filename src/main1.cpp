#include "task1.h"
#include <stdio.h>

int main()

{
		int age=0;
		printf("how old are you? ");
		scanf("%d,&age");
		int result=ageCheck(age);
		if(result==0)
			printf("access granted!\n");
		else
			printf("access denied!\n");
		return 0;

}