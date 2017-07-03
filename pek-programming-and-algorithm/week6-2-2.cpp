#include <iostream>
using namespace std;

int main() {
	int h, r, n = 0;
	cin >> h >> r;
	double v;
	v = 3.14159 * r * r * h / 1000;
	double jus = 20 / v;
	if (jus - (int)jus > 0) {
		n = (int)jus + 1; 
		cout << n;
	} else {
		n = jus;
		cout << n;
	}
} 
