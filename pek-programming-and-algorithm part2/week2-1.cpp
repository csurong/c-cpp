#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int n, flag = 0, a[100];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] == i) {
			cout << a[i];
			return 0;
		}
	}
	cout << "N";
}