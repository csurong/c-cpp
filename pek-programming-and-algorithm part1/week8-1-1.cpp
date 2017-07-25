#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int best;
	for (best = 1; best <= 4; best++) {
		bool a = (best == 2);
		bool b = (best == 4);
		bool c = (best != 3 );
		bool d = !b;

		if (a + b + c + d != 1) {
			continue;
		}
		cout << best << endl;
		if (a == 1) {
			cout << "A";
		} else if (b == 1) {
			cout << "B";
		} else if (c == 1) {
			cout << "C";
		} else {
			cout << "D";
		}
	}
	system("pause");
	return 0;
}