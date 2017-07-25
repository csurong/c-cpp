//这道题目我的想法是第n大的数，一定小于（n-1）个数。由于需要记录a[i]小于几个数，添加了一个同步的b[i] 作计数。
//最后的if语句中加了break，考虑到会有相同的数，但只要输出一个值就行了 
#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n;
	cin >> m;
	int a[n], b[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = 0;
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i] < a[j]) {
				b[i] += 1;
			}
		}
	}
	
	for (int i = 0; i < n; i++) {
		if (b[i] == m - 1) {
			cout << a[i];
			break;
		}
	}
	
	return 0;
}
