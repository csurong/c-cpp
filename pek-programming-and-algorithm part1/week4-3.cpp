//编程题＃3：奇偶排序（二）
//描述
//
//和上题一样，但是要求用第二种解法
//
//输入
//
//输入十个整数
//
//输出
//
//按照奇偶排序好的十个整数
#include <iostream> 
using namespace std;

int main() {
	int a[10];
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}
	
	for (int i = 0; i < 9; i++) {
		for (int j = 1; j < 10 - i; j++) {
			bool leftIsEven = a[j - 1] % 2 == 0;
			bool rightIsEven = a[j] % 2 == 0;
			if ((leftIsEven && !rightIsEven) || (leftIsEven == rightIsEven && a[j - 1] > a[j])) {
				int temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		cout << a[i] << ' ';
	}
	return 0;
}
