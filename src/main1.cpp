#define _CRT_SECURE_NO_WARNINGS
#include "Test.h"
#include <stdio.h>
#include <clocale>	// ��� �������� �� ������� ����

int main() {

	int age = 0;

	setlocale(LC_ALL, "Russian");

	printf("������ �������: ");
	scanf("%d", &age);
	int result = ageCheck(age);
	if (result == 0)
		printf("������ ��������\n");
	else
		printf("������ ��������\n");

	return 0;
}