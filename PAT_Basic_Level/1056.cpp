#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a+n);
	
	//����ȥ���ظ����֣����Ѳ��ظ��ķ�������b�� 
	int num=0;
	int b[n];
	for (int i = 0; i < n-1; i++) {
		if (a[i] != a[i+1]) {
			b[num] = a[i];
			num++;
		}
	}
	if (a[n-2] != a[n-1]) {
		b[num] = a[n-1];
	}
	
	//����������֣�ͬʱȥ��������ϵ���� 
	int sum=0;
	for (int i = 0; i <= num; i++) {
		for (int j = 0; j <= num; j++) {
			if (i==j) continue;
			sum += b[i] * 10 + b[j];
		}
	}
	cout << sum;
} 
