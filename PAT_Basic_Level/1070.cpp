#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	float a[n];
	for (int i = 0; i< n; i++) {
		cin >> a[i];
	}
	sort(a, a+n);
	float sum = (a[0] + a[1]) / 2;
	for (int i = 2; i < n; i++) {
		sum = (a[i] + sum) / 2;
	}
	
	cout << (int)sum << endl;
	return 0;
} 
