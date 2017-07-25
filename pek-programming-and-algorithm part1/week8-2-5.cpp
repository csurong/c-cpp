#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int n;

	cin >> n;//n>10, n< 100
	for (int i = 10; i <= n; i++) {
		int n1 = 0, n2 = 0, sum = 0;
		n1 = i / 10;
		n2 = i % 10;
		sum = n1 + n2;
		if (i % sum == 0) {
			cout << i << endl;
		}
	}
}