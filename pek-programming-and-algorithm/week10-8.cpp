#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int a[10001], L, M;

	cin >> L >> M;
	for (int i = 0; i <= L; i++) {
		a[i] = 1;
	}
	for (int j = 0; j < M; j++) {
		int x, y;
		cin >> x >> y;
		for (int k = x; k <= y; k++) {
			a[k] = 0;
		}
	}
	int num = 0;
	for (int i = 0; i <= L; i++) {
		if (a[i] == 1) {
			num++;
		}
	}
	cout << num;
	system("pause");
	return 0;
}