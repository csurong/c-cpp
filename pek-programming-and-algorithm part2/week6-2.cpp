#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main() {
	int n;
	char line[100][256];
	char oline[100][256];

	cin >> n;
	cin.get();

	for (int i = 0; i < n; i++) {
		int length = 0;
		cin.getline(line[i], 256);//不超过255，注意还有一个结束符，所以给他256个位置
		length = strlen(line[i]);

		for (int j = 0; j <= length; j++) {	//这里等号的目的是在每一行后面加一个字符串结束符号，以便后面可以直接用oline[k]输出
			switch(line[i][j]) {
			case 'A':
				oline[i][j] = 'T'; break;
			case 'T':
				oline[i][j] = 'A'; break;
			case 'G':
				oline[i][j] = 'C'; break;
			case 'C':
				oline[i][j] = 'G'; break;
			default:
				oline[i][j] = '\0';
			}
		}
	}

	for (int k = 0; k < n; k++) {
		cout << oline[k] << endl;
	}
	system("pause");
	return 0;
}