#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int jia=0, yi=0;
	for (int i = 0; i < n; i++) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		int sum = a+c;
		if (b == d) {
			continue;
		} else if (b == sum) {
			yi++;
		} else if (d == sum) {
			jia++;
		}
	}
	cout << jia << " " << yi;
	return 0;
} 
