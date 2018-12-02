#include "task1.h" 
#include <iostream> 

using namespace std;

int main()
{
	int age = 18;
	cout << "please enter age\n";
	cin >> age;
	if (age >= 18) {
		cout << "Access granted";
	}
	else {
		cout << "Access denied";
	}

	return 0;
}