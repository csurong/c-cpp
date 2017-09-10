#include <iostream>
#include <cmath>
#include <map>
#include <cstdio>
#include <string>
using namespace std;

bool sushu(int num) {
	int end = sqrt((double)num);
	for (int i = 2; i <= end; i++) {
		if (num%i == 0) return false;
	}
	return true;
}

int main() {
	map<int, int> list;
	
	int n,id;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> id;
		list[id] = i+1;
	}
	
	int k;
	cin >> k;
	int findid;
	int tempid[k];
	string tempout[k];
	for (int i = 0; i < k; i++) {
		cin >> findid;
		tempid[i] = findid;
		if (list[findid] == 0) {
			tempout[i] = ": Are you kidding?";
//			printf("%.4d", findid);
//			cout << ": Are you kidding?\n";
		} else if (list[findid] == 1) {
			tempout[i] = ": Mystery Award";
//			printf("%.4d", findid);
//			cout << ": Mystery Award";
			list[findid] = -1;
		} else if (list[findid] < 0) {
			tempout[i] = ": Checked";
//			printf("%.4d", findid);
//			cout << ": Checked\n";
		} else if (list[findid] >= 2) {
			if (sushu(list[findid])) {
				tempout[i] = ": Minion";
//				printf("%.4d", findid);
//				cout << ": Minion\n";
				list[findid] = -1;
			} else {
				tempout[i] = ": Chocolate";
//				printf("%.4d", findid);
//				cout << ": Chocolate\n";
				list[findid] = -1;
			}
		} 
	}
	for (int i = 0; i < k; i++) {
		printf("%.4d", tempid[i]);
		cout << tempout[i] << endl;
	}
	return 0;
} 
