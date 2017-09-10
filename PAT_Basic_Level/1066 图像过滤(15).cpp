#include <iostream>
using namespace std;

int main() {
	int m, n, a, b, grey;
	int aa[500][500];
	cin >> m >> n >> a >> b >> grey;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &aa[i][j]);
			if (aa[i][j] >= a && aa[i][j] <= b) {
				aa[i][j] = grey;
			}
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (j == n-1) {
				printf("%.3d\n", aa[i][j]);
			} else {
				printf("%.3d ", aa[i][j]);
			}
		}
	}
	return 0;
} 
