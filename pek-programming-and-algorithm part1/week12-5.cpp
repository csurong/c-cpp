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
			}//��flag�����һλʱ����bug
		}//������λ��
		if (flag == strlen(str) - 1) {
			cout << str << substr << endl;
		} else {
			char temp[50] = {' '};//�������鸳��ֵ���û�����ˣ�ԭ��
			for (int j = 0; j < strlen(str) - flag - 1; j++) {
				temp[j] = str[flag + 1 + j] ;
			}
			//cout << temp << ' ' << strlen(temp) << ' ';
			for (int i = 1; i <= 3; i++) {
				str[flag + i] = substr[i - 1];
			}
			//cout << str << ' ';���˴�û����
			for (int j = 0; j < strlen(temp); j++) {
					str[flag + 4 + j] = temp[j];
			}
			cout << str << endl;
		}
	}
}
//��ʱ��һЩ����������Ϥ���õ������취�������ġ��϶��и���ֱ�ӵķ���