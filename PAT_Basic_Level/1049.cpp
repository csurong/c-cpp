#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	double a[n];
	double sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i]*(i+1)*(n-i);
	}
	printf("%.2f", sum);
	return 0;
}
