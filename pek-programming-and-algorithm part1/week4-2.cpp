//编程题＃2：奇偶排序（一）
//描述
//
//输入十个整数，将十个整数按升序排列输出，并且奇数在前，偶数在后。
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
	
	int l = 0, r = 9;
	while(l <= r) {
		bool leftIsOdd = a[l] % 2 == 1;
		bool rightIsEven = a[r] % 2 == 0;
		if (leftIsOdd) {
			l++;
		} else if (rightIsEven) {
			r--;
		} else if (!leftIsOdd && !rightIsEven) {
			int temp = a[l];
			a[l] = a[r];
			a[r] = temp;
		}
	}
	
	int start = 0, end = l;
	for (int i = start; i < end - 1; i++) {
		for (int j = start + 1; j < start + end - i; j++) {
			if (a[j - 1] > a[j]) {
				int temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}
	
	start = l; end = 10;
	for (int i = start; i < end -1; i++) {
		for (int j = start + 1; j < start + end - i; j++) {
			if (a[j - 1] > a[j]) {
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





