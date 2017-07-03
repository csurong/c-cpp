//编程题＃1：实现冒泡排序
//描述
//
//请根据自己的理解编写冒泡排序算法，数组大小1000以内
//
//输入
//
//第一行是n，表示数组的大小
//
//接着n行是数组的n个元素
//
//输出
//
//排序之后的结果
//
//一个元素一行
#include <iostream>
using namespace std;
int main() {
	int n, a[1000];
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	for (int i = 0; i < n - 1;i++) {
		for (int j = 1; j < n - i; j++) {
			if (a[j - 1] > a[j]) {
				int temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}
	
	for (int i = 0; i < n; i++) {
		cout << a[i] << endl;
	}
	return 0;
}
