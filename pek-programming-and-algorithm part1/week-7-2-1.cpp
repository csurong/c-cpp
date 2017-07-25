#include <iostream>
#include <iomanip>
using namespace std;

int n = 0, x[100];

int main() {
	cin >> n;
	double a = 0, b = 0, c = 0, d = 0;
	
	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}
	for (int i = 0; i < n; i++) {
		if (x[i] < 19) {
			a += 1;
		} else if (x[i] < 36) {
			b += 1;
		} else if (x[i] <= 60) {
			c += 1;
		} else if (x[i] > 60) {
			d += 1;
		}
	}
	cout << "1-18: " << fixed << setprecision(2) << a/n*100 << "%" << endl;
	cout << "19-35: " << fixed << setprecision(2) << b/n*100 << "%" << endl;
	cout << "36-60: " << fixed << setprecision(2) << c/n*100 << "%" << endl;
	cout << "60-: " << fixed << setprecision(2) << d/n*100 << "%" << endl;
	return 0;
}

