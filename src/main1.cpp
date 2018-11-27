#include <stdio.h>
#include "task1.h"

int main()
{
    int age = 0;

    printf("How old are you?\n");
    scanf("%d", &age);

        if (checkAge(age) == 0)
            printf("Access denied!\n");
        else
            printf("Access granted!\n");

    return 0;
}
