#include <iostream>
using namespace std;

int main() {
	int n, m;//n是人数，m是题目数 
	cin >> n >> m;
	int tureSocore[m]={0};//正确的分数 
	int tureAnswer[m]={0};//正确的答案 
	for (int i = 0; i < m; i++) {
		cin >> tureSocore[i];
	} 
	for (int i = 0; i < m; i++) {
		cin >> tureAnswer[i];
	}
	int a[n][m];
	int socore[n]={0};//n个学生的总分 
	for (int i = 0; i < n; i++) {//n个学生的 m 道题目答案 
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
