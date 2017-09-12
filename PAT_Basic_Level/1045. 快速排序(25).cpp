#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n; 
	cin >> n;
	int a[n];
	int left[n] = {0};
	int right[n] = {0};
	vector<int> c;
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	int max = a[0], min = a[n-1];
	
	for (int i = 0; i < n; i++) {
		if (a[i] >= max) {
			max = a[i];
			left[i] = 1;
		}
		
		if (a[n-1-i] <= min) {
			min = a[n-1-i];
			right[n-1-i] = 1;
		}
	}
	
	for (int i = 0; i < n; i++) {
		if (left[i] * right[i]) {
			c.push_back(a[i]);
		}
	}
	
	sort(c.begin(), c.end());
	
	cout << c.size() << endl;
	for (int i = 0; i < c.size(); i++) {
		if (i==0) printf("%d", c[i]);
		else printf(" %d", c[i]);
	}
	printf("\n");
	return 0;
}
