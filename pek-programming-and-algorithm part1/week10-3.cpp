#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	char s[500];
	int p[100];
	int start = 0;

	cin.getline(s, 500);
	p[0] = -1;

	int max = 0, j = 0, i = 0;

	while(s[i] != '\0') {
		if (s[i] == ' ' || s[i] == '.') {
			j++;
			p[j] = i;
		}
		i++;
	}
	//去空格位置保存在p数组

	int temp = 0;
	for (int k = 1; k <= j; k++) {
		temp = p[k] - p[k - 1] - 1;
		if (temp > max) {
			max = temp;
			start = k - 1;//p[k-1]保存的是最长单词的前一位置
		}
	}
	for (int t = 1; t <= max; t++) {
		cout << s[p[start] + t];
	}
	system("pause");
	return 0;
}