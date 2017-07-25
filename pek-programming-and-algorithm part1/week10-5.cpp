#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int n = 0, num = 0;
	int ct[100][100];
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> ct[i][j];
		}
	}
	for (int i = 1; i < n - 1; i++) {
		for (int j = 1; j < n - 1; j++) {
			if (ct[i-1][j] - ct[i][j] >= 50){
				if (ct[i+1][j] - ct[i][j] >= 50) {
					if (ct[i][j+1] - ct[i][j] >= 50) {
						if (ct[i][j-1] - ct[i][j] >= 50) {
							num++;
						}
					}
				}
			}
		}
	}
	cout << num;
	return 0;
}