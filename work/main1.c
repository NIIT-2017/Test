#include "task1.h"
#include <stdio.h>

int main()
{
   int age;
   printf("Enter your age: ");
   scanf("%",&age);
       if(checkAge(age)==1)
     printf("Access granted!\n");
else
printf("Access denied!\n');
return ;
}
