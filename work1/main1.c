#include "task1.h"
#include <stdio.h>

int main()
{
  int age;
  printf("Enter age: ");
  scanf("%d", &age);
  if (checkAge(age)==1)
  printf ("Access granted\n");
  else
  printf ("Access denied!\n");
return 0;
}