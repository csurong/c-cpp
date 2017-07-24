#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int n, temp;
	cin >> n;
	while(n != 0) {
		int a[15000], mid= 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < n - 1; i++) {
			for (int j = 0; j < n - 1 - i; j++) {
				if (a[j] > a[j + 1]) {
					temp = a[j];
					a[j] = a[j + 1];
					a[j + 1] = temp;
				}
			}
		}
		if (n % 2 == 1) {
			mid = a[n / 2];
		} else {
			mid = (a[n / 2] + a[n / 2 - 1]) / 2;
		}
		cout << mid << endl;
		cin >> n;
	}
	return 0;
}