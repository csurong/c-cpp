#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct ti {
	int manfen;
	int options;
	int right;
	string answers;
} timu[110];


int main() {
	int n, m;
	cin >> n >> m;
	int ticuo[m] = {0};//设每条题目错了0次 
	int defen[n] = {0};//设每个学生分数为0 
	for (int i = 0; i < m; i++) {//每道题目的基本状况输入 
		cin >> timu[i].manfen >> timu[i].options >> timu[i].right;
		getline(cin, timu[i].answers); 
	}
	
	string myanswstr[n][m];
	
	for (int i = 0; i < n; i++) {//每个学生的答案输入 
		scanf("\n");
		for (int j = 0; j < m; j++) {// m道题目逐个输入比较 
			int myanswnum=0; 
			if (j != 0) scanf(" ");
			scanf("(%d", &myanswnum);
			//if (myanswnum != timu[j].right) ticuo[j]++;
			getline(cin, myanswstr[i][j], ')');
			if (myanswstr[i][j] != timu[j].answers) {
				ticuo[j]++;
			} else {
				defen[i]+= timu[j].manfen; 
			}
		}
	} 
	
	for (int i = 0; i < n; i++) {
		cout << defen[i] << endl;
	}
	
	sort(ticuo, ticuo+m);//给m条题目的错误次数排序
	if (ticuo[m-1] == 0) {
		cout << "Too simple";
	} else {
		cout << ticuo[m-1];
		for (int i = 0; i < m; i++) {
			if (ticuo[i] == ticuo[m-1]) {
				cout << " " << i+1;
			}
		} 
	}
	
	
	return 0;
} 

