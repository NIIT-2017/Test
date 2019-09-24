#include <conio.h>
#include <iostream>
#include "task1.h"
using namespace std;

int main() {
	int myAge;
	cin >> myAge;
	if (ageCheck(myAge)) {
		cout << "Access granted";
	}
	else {
		cout << "Access denied";
	}
	//getch();
	return 0;
}