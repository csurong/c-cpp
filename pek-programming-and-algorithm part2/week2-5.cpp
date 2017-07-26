#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int m, font, back; 
	float rate[100]={0};
	int id[100] = {0};
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> id[i];
		cin >> font>> back;
		rate[i] = (float)(back- font) / (float)font;
	}//no problem
	for (int i = 0; i < m - 1; i++) {
		for (int j = 0; j < m - 1 - i; j++) {
			if (rate[j] > rate[j + 1]) {
				float temp = rate[j];
				rate[j] = rate[j + 1];
				rate[j + 1] = temp;
				int tempId = id[j];
				id[j] = id[j+1];
				id[j + 1] = tempId;
			}
		}
	}//no problem

	float max = 0, ch = 0; int flag = 1;;
	for (int i = 1; i < m; i++) {
		ch = rate[i] - rate[i - 1];
		if (ch > max) {
			max = ch;
			flag = i;
		}
	}
	//cout << m << " " << flag << endl;
	cout << m - flag << endl;//A
	for (int i = 0; i < m - flag; i++) {
		cout << id[flag+i] << endl;
	}

	cout << flag << endl;
	for (int i = 0; i < flag; i++) {
		cout << id[i] << endl;
	}
	system("pause");
	return 0;
}