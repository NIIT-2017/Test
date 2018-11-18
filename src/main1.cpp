#include "Task1.h"

int main()
{
	int age;
	setlocale(LC_ALL, "");
	cout << "¬ведите ваш возраст ";
	cin >> age;
	if (ageCheck(age) == 1) cout << "Access granted\n";
	else cout << "Access denied\n";
	system("pause");
	return 0;
}