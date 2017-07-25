#include <iostream>
using namespace std;

int main() {
	int n, x, y, num=0;
	cin >> n >> x >> y;
	if ((n - y / x) < 0) {
		num = 0;
		cout << num;
	} else if ((((double) y/x) - (int)(y/x)) >0 ) {
		num = n - y / x - 1;
		cout << num;
	} else {
		num = n - y / x;
		cout << num;
	}
	}
