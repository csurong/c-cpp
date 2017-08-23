#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int row=0, col=0;
	int a[100][100] = {0};
	cin >> row >> col;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < col; i++) {
		int keyx = 0;
		int keyy = i;

		while(keyx>=0 && keyx < row && keyy >=0 && keyy < col) {
			cout << a[keyx][keyy] << endl;
			keyx++;
			keyy--;
		}
	}

	for (int i = 0; i < row-1; i++) {
		int keyx = i + 1;
		int keyy = col - 1;

		while(keyx>=0 && keyx < row && keyy >=0 && keyy < col) {
			cout << a[keyx][keyy] << endl;
			keyx++;
			keyy--;
		}
	}

	system("pause");
	return 0;
}