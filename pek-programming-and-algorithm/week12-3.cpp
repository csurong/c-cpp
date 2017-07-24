#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
	int n;
	double x[100], y[100];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x[i];
		cin >> y[i];
	}
	double max = 0, temp = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			temp = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);
			temp = sqrt(temp);
			if (temp > max) {
				max = temp;
			}
		}
	}
	cout << fixed << setprecision(4) << max << endl;
	system("pause");
	return 0;
}