#include <iostream>
#include <stdlib.h>
using namespace std;

int cal(int);

int main() {
	int n;
	cin >> n;
	cal(n);
	cout << "End" << endl;
	system("pause");
	return 0;
}

int cal(int n) {
	if (n == 1) {
		return 0;
	} else {
		if (n % 2 == 1) {
			int m = n*3+1;
			cout << n << "*3+1=" << m << endl;
			cal(m);
		} else {
			int m = n / 2;
			cout << n << "/2=" << m << endl; 
			cal(m);
		}
	}
}