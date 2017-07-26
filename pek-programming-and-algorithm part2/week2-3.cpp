#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main() {
	float price[3][3]={0};
	for (int i = 0; i < 3; i++) {
		int id, num;
		cin >> id >> num;
		for (int j = 0; j < num; j++){
			char type;
			float pri = 0;
			cin >> type >> pri;
			switch (type) {
			case('A') :  price[id - 1][0] += pri;break;
			case('B') :  price[id - 1][1] += pri;break;
			case('C') :  price[id - 1][2] += pri;break;
			default : break;
			}
		}
	}
	for (int i = 0; i < 3; i++) {
		cout << i+1 <<  " ";
		cout << fixed << setprecision(2) << price[i][0] + price[i][1] + price[i][2] << endl;
	}
	for (int i = 0; i < 3; i++) {
		cout << (char)(i+65) << " ";
		cout << fixed << setprecision(2) << price[0][i] + price[1][i] + price[2][i] << endl;
	}
	system("pause");
	return 0;
}