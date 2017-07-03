#include <iostream>
using namespace std;

int main() {
	int k, b;
	int q = 0 , w = 0, e = 0;
	cin >> k;
	for (int a = 0; a < k; a++) {
		cin >> b;
		if (b == 1) {
			q++;
		} else if (b == 5) {
			w++;
		} else if (b == 10) {
			e++;
		}
	}
	cout << q << endl;
	cout << w << endl;
	cout << e << endl;
}
