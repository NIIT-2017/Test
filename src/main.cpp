#include "task1.h"
#include <iostream>
using namespace std;
int main(){
	int a;
	cin >> a;
	if (ageCheck(a))
		cout << "Access denied" << endl;
	else
		cout << "Access granted" << endl;
}
