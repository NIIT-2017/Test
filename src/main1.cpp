#include <iostream>
#include "../include/task1.h"
using namespace std;

int main(){
	int age;
	cin >> age;
	if(ageCheck(age) == 1){
		cout << "Access granted" << endl;
	}
	else{
		cout << "Access denied" << endl;
	}
	return 0;
}
