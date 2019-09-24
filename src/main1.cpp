#include <iostream>
#include "task1.h"
using namespace std;

int main() {
	int myAge;
	cout << "How old are you?\n";
	cin >> myAge;
	if (ageCheck(myAge) == 1) {
		cout << "Access granted\n";
	}
	else {
		cout << "Access denied\n";
	}
	system("pause");
	return 0;
}