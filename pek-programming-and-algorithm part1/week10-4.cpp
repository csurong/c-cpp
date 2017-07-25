#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main() {
	int a[5][5], temp[5] = {0};
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> a[i][j];
		}
	}
	int n, m;
	cin >> n >> m;
	if ((n<0||n>4)||(m<0||m>4)) {
		cout << "error" << endl;
	} else {
		for (int k =0; k < 5; k++) {
			temp[k] = a[n][k];
			a[n][k] = a[m][k];
			a[m][k] = temp[k];
		}
		for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << setw(4) << a[i][j];
			if (j == 4) {
				cout << endl;
			}
		}
	}
	}
	
	system("pause");
	return 0;
}