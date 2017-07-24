#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int a[100], b[100];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		a[n + m - 1 - i] = a[n - 1 - i];
	}
	for (int i = 0; i < m; i++) {
		a[i] = a[n + i];
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}
	system("pause");
	return 0;
}