//�����Ŀ�ҵ��뷨�ǵ�n�������һ��С�ڣ�n-1��������������Ҫ��¼a[i]С�ڼ������������һ��ͬ����b[i] ��������
//����if����м���break�����ǵ�������ͬ��������ֻҪ���һ��ֵ������ 
#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n;
	cin >> m;
	int a[n], b[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = 0;
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i] < a[j]) {
				b[i] += 1;
			}
		}
	}
	
	for (int i = 0; i < n; i++) {
		if (b[i] == m - 1) {
			cout << a[i];
			break;
		}
	}
	
	return 0;
}
