#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int conver();
int found(int);

char input[100];
int i = 0, count = 0;

int main() {
	cin.getline(input, 100);
	conver();
	found(i);
	system("pause");
}
 
int conver() {
	int i = 1;
	while(input[i] != '\0') {
		if(input[i] == input[0]) {
			input[i] = 'A';
		} else {
			input[i] = 'B';
		}
		i++;
	}
	input[0] = 'A';
	return 0;
}

int found(int i) {
	while(input[i] != 'B' && i < strlen(input)-1) {
		i++;
	}
	int temp = i;
	input[i] = 'C';

	while(input[i] != 'A' && i > 0) {
		i--;
	}
	input[i] = 'C';

	if (count * 2 == strlen(input)) {
		return 0;
	}

	cout << i << ' ' << temp << endl;
	count++;
	found(i);
	return 0;
}
//�����˼·��
//	1.���ǵ�������ַ�ֻ�����֣��������̶�����ˣ�������conver()����������ȷ�����ַ�ȷ��
//		Ϊ A �� B���������Ĳ���
//	2.������ò�����Ժ������˺����Ļ���˼·�������ġ����ȴ�ͷ��ʼ�� B���ҵ�֮���¼λ�ã�����ǰ��A��
//		�ɴ˱��ҵ���һ�ԣ�����������������ַ���Ϊ C��֮���ٴ�C��λ������� B���������һ�ξͼ�¼һ��count��
//		��cout��ֵ�������������ʱ���ս�ݹ顣