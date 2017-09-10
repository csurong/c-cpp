#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdio>
using namespace std;

int main() {
	int n;
	cin >> n;
	float a[n][2];
	float b[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i][0] >>a[i][1];
		b[i] = sqrt(pow(a[i][0], 2) + pow(a[i][1], 2));
	}
	sort(b, b+n);
	printf("%.2f", b[n-1]);
	return 0;
}
