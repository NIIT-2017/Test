#include "task1.h"
#include <iostream>
using namespace std;
int main(){
	int a;
	cin >> a;
	if (ageCheck(a))
		cout << "Access granted" << endl;
	else
		cout << "Access denied" << endl;
	return 0;
}
