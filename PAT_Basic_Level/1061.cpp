#include <iostream>
using namespace std;

int main() {
	int n, m;//n��������m����Ŀ�� 
	cin >> n >> m;
	int tureSocore[m]={0};//��ȷ�ķ��� 
	int tureAnswer[m]={0};//��ȷ�Ĵ� 
	for (int i = 0; i < m; i++) {
		cin >> tureSocore[i];
	} 
	for (int i = 0; i < m; i++) {
		cin >> tureAnswer[i];
	}
	int a[n][m];
	int socore[n]={0};//n��ѧ�����ܷ� 
	for (int i = 0; i < n; i++) {//n��ѧ���� m ����Ŀ�� 
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
			if (a[i][j] == tureAnswer[j]) {
				socore[i] += tureSocore[j];
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << socore[i] << endl;
	}
} 
