#include "task1.h"
#include <stdio.h>

int main()
{
  int age;
  printf("Enter you age: ");
  scanf("%d",&age);
  if(checkAge(age)==1)
    printf("Access granted!\n);
  else
  prinf("Access denied!\n")
}
