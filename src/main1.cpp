#include <stdio.h>
#include "task1.h"

void clean_stdin(void)
{
    int c=0;
    do
    {
        c = getchar();
    }

    while (c != '\n' && c != EOF);
}

int main()
{
    int age = 0;

    while (1)
    {
        printf("How old are you?\n");
        int result=scanf("%d", &age);
                if (result == 0 || age<=0)
                 {
                    printf("Age is incorrect!\n");
                    clean_stdin();
                 }
                else
                    break;
    }
    printf(CheckAge(age));
    return 0;
}
