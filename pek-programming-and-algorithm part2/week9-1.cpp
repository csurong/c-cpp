#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int m, k;
	int count=0;
	cin >> m >> k;

	if (m % 19 != 0) {
		cout << "NO";
	} else {
		for (; m > 0; m = m / 10) {
			if (m % 10 == 3) count++;
		}
		if (count == k) {
			cout << "YES";
		} else {
			cout << "NO";
		}
	}

	system("pause");
	return 0;
}