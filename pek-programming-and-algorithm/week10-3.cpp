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
	//ȥ�ո�λ�ñ�����p����

	int temp = 0;
	for (int k = 1; k <= j; k++) {
		temp = p[k] - p[k - 1] - 1;
		if (temp > max) {
			max = temp;
			start = k - 1;//p[k-1]�����������ʵ�ǰһλ��
		}
	}
	for (int t = 1; t <= max; t++) {
		cout << s[p[start] + t];
	}
	system("pause");
	return 0;
}