#include <iostream>
#include <string>
#include <vector>
using namespace std;


void handle(string A, string B) {
	int wei = 0;
	vector<char> shuchu;
	for (int i = A.size(); i > 0; i--) {
		wei++;
		if (wei%2 == 1) {
			int temp = A[i-1] - '0' + B[i-1] - '0';
			if (temp == 10) {
				shuchu.insert(shuchu.begin(), 'J');
			} else if (temp == 11) {
				shuchu.insert(shuchu.begin(), 'Q');
			} else if (temp == 12) {
				shuchu.insert(shuchu.begin(), 'K');
			} else {
				shuchu.insert(shuchu.begin(), temp%13+'0');
			}
		} else {
			int temp = B[i-1] - A[i-1];
			if (temp < 0) temp+= 10;
			shuchu.insert(shuchu.begin(), temp+'0');
		}
	}
	for (int i = 0; i < shuchu.size(); i++) {
		cout << shuchu[i];
	}
}

int main() {
	string strA, strB;
	int wei = 0;
	cin >> strA >> strB;
	
	if (strA.size() > strB.size()) {
		int chawei = strA.size() - strB.size();
		string strBB;
		strBB.append(chawei, '0');
		strBB.append(strB);
		handle(strA, strBB);
	} else if (strB.size() > strA.size()) {
		int chawei = strB.size() - strA.size();
		string strAA;
		strAA.append(chawei, '0');
		strAA.append(strA);
		handle(strAA, strB);
	} else {
		handle(strA, strB);
	}
} 
