#include <iostream> 
using namespace std;

int main() {
	int n, a[6];
	cin >> n;
	a[0] = n / 100; n -= a[0] * 100;
	a[1] = n / 50; n -= a[1] * 50;
	a[2] = n / 20; n -= a[2] * 20;
	a[3] = n / 10; n -= a[3] * 10;
	a[4] = n / 5; n -= a[4] * 5;
	a[5] = n / 1;
	for (int i = 0; i < 6; i++) {
		cout << a[i] << endl;
	}
} 
