#define _CRT_SECURE_NO_WARNINGS
#include "task1.h"
#include <stdio.h>
#include <clocale>	// для перехода на русский язык

int main() {

	int age = 0;

	setlocale(LC_ALL, "Russian");

	printf("ВВести возраст: ");
	scanf("%d", &age);
	int result = ageCheck(age);
	if (result == 1)
		printf("Доступ разрешён\n");
	else
		printf("Доступ запрещён\n");

	return 0;
}