#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int a[1000], n = 0, k = 0;
	int b[1000], flag = 0;

	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = a[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j ++) {
			if (a[i] == k - b[j]) {
				flag = 1;
				break;
			}
		}
		if (flag == 1) {
			break;
		}
	}
	if (flag == 1) {
		cout << "yes";
	} else {
		cout << "no";
	}
}