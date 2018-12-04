#include "task2.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
	int hour;
	int min;
	printf("Enter the time hh:mm ");
	scanf ("%d:%d", &hour, &min);
	printf ("%s", greet(hour, min));
	return 0;
}