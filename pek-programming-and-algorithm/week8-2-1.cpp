#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int a, sum = 0, b[5];
	cin >> a;
	for (int i = 0; i < 5; i++) {
		cin >> b[i];
		if (b[i] < a) {
			sum += b[i];
		}
	}
	cout << sum << endl;
	system("pause");
}