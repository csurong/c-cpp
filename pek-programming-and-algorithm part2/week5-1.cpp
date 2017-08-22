#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int num = 0;
	cin >> num;
	for (int i = 0; i < num; i++) {
		int m, n, sum = 0;
		cin >> m >> n;
		int a[100][100] = {0};
		for (int j = 0; j < m; j++) {
			for (int k = 0; k < n; k++) {
				cin >> a[j][k];
				if (j==0 || k==0 || j==m-1 || k==n-1) {
					sum += a[j][k];
				}
			}
		}
		cout << sum << endl;
	}
	system("pause");
	return 0;
}