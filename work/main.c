//
//  main.c
//  works
//
//  Created by Ksenia on 25.10.17.
//  Copyright © 2017 Ksenia. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "task1.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (checkAge(age)==1)
        printf("Access granted\n");
    else
        printf("Access denied\n");
    return 0;
}
