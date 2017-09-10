#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n], b[n]={0};
	for (int i = 0; i <n; i++)  {
		cin >> a[i];
		while (a[i] != 0) {
			b[i] += a[i]%10;
			a[i] /= 10;
		}
	}
	sort(b, b+n);
	int num = 1;
	int c[n];
	c[0] = b[0];
	for (int i = 0; i < n-1; i++) {
		if (b[i] != b[i+1]) {
			c[num] = b[i+1];
			num++;
		}
	}
	cout << num << endl;
	for (int i = 0; i < num; i++) {
		if (i == 0) cout << c[0];
		else cout << " " << c[i];
	}
	return 0;
}
