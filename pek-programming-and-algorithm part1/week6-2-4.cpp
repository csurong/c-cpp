#include <iostream>
using namespace std;

int main() {
	int a[6];
	for (int i = 0; i < 6; i++) {
		cin >> a[i];
	}
	
	for (int i = 0; i < 5; i++) {
	 	for (int j = 0; j < 5 - i; j++) {
	 		if (a[j] > a[j+1]) {
	 			int temp = a[j];
	 			a[j] = a[j+1];
	 			a[j+1] = temp;
			}
		}
	}
	
	int max=1, min=100;
	for (int i = 5; i >= 0; i--) {
		if (a[i] % 2 == 1) {
			if (a[i] > max) {
				max = a[i];
			}
		} else {
			if (a[i] < min) {
				min = a[i];
			}
		}	
	}
	if ((max - min) > 0) {
		cout << (max - min);
	} else {
		cout << (min - max);
	}
	return 0;
}
