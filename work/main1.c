//
//  main1.c
//  check_age
//
//  Created by Igor T on 10/24/17.
//  Copyright © 2017 appmasters. All rights reserved.
//


#include "task1.h"
#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (checkAge(age == 1))
        printf("Access granted\n");
    else
        printf("Access deinied\n");
    return 0; 
}
