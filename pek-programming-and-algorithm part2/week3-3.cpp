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
//本题的思路：
//	1.考虑到输入的字符只有两种，但并不固定。因此，首先用conver()函数来将不确定的字符确定
//		为 A 和 B，方便后面的查找
//	2.后面调用查找配对函数，此函数的基本思路是这样的。首先从头开始找 B，找到之后记录位置，并向前找A，
//		由此便找到了一对，将它们输出，并把字符变为 C。之后再从C的位置向后找 B···输出一次就记录一次count，
//		当cout的值等于最终配对数时，终结递归。