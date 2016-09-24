#include <iostream>
#include <conio.h>

using namespace std;

int fact(int a) {
	
	if (a == 1) {
		return 1;
	}

	return fact(a - 1) * a;
}


int ff(int a) {
	if (a == 1 || a == 0) {
		return 1;
	}
	return ff(a - 1) + ff(a - 2);
}

void main() {
	cout << fact(5) << endl;
	cout << ff(5) << endl;
	system("pause");
}