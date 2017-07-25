#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main() {
	char str[50]={' '}, substr[4] = {' '};
	while (cin >> str >> substr) {
		char max = '0';
		int flag = 0;
		for (int i = 0; i < strlen(str); i++) {
			if (str[i] > max) {
				max = str[i];
				flag = i;
			}//当flag是最后一位时，有bug
		}//找最大的位置
		if (flag == strlen(str) - 1) {
			cout << str << substr << endl;
		} else {
			char temp[50] = {' '};//给此数组赋初值后就没问题了，原因？
			for (int j = 0; j < strlen(str) - flag - 1; j++) {
				temp[j] = str[flag + 1 + j] ;
			}
			//cout << temp << ' ' << strlen(temp) << ' ';
			for (int i = 1; i <= 3; i++) {
				str[flag + i] = substr[i - 1];
			}
			//cout << str << ' ';到此处没问题
			for (int j = 0; j < strlen(temp); j++) {
					str[flag + 4 + j] = temp[j];
			}
			cout << str << endl;
		}
	}
}
//暂时对一些函数还不熟悉，用的是死办法做出来的。肯定有更简单直接的方案