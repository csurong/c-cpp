#include <iostream>#
#include <stdlib.h>
using namespace std;

int reverse();

int i = 0;
char sequence[500]={"hello world."};
int main() {
	//cin.getline(sequence, 500);
	while(sequence[i] != '\0') {
		if (reverse() == 1) {
			cout << ' ';
		}
	}
	cout << endl;
	system("pause");
	return 0;
}

int reverse() {
	char ch = sequence[i];
	i++;
	if (ch == ' ') {
		return 1;//����Կ������ս����������ظ���һ��ĵݹ麯������ֱ�Ӹ���������ֵ����������ո�ʱ��������һ��ֱ���ж����
	}
	if (ch != ' ' && ch!= '\0') {
		reverse();
		cout << ch;
	}
	return 1;//����ÿ�εݹ�֮�󷵻ظ���������ֵ
}