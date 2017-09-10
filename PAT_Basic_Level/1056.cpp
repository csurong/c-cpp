#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a+n);
	
	//以下去掉重复数字，并把不重复的放在数组b中 
	int num=0;
	int b[n];
	for (int i = 0; i < n-1; i++) {
		if (a[i] != a[i+1]) {
			b[num] = a[i];
			num++;
		}
	}
	if (a[n-2] != a[n-1]) {
		b[num] = a[n-1];
	}
	
	//以下组合数字，同时去除自我组合的情况 
	int sum=0;
	for (int i = 0; i <= num; i++) {
		for (int j = 0; j <= num; j++) {
			if (i==j) continue;
			sum += b[i] * 10 + b[j];
		}
	}
	cout << sum;
} 
