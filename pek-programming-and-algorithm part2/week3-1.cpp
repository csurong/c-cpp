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
		return 1;//这可以看作是终结条件，返回给上一层的递归函数，不直接给主函数赋值。当遇到多空格时，这又是一个直接判断语句
	}
	if (ch != ' ' && ch!= '\0') {
		reverse();
		cout << ch;
	}
	return 1;//这是每次递归之后返回给主函数的值
}