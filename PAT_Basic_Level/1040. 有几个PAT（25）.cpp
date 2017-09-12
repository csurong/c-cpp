#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	getline(cin, str);
	int beginP = 0, endT = 0;
	int flagp = 0, flagt = 0;//biaoji
	int nump = 0, numa = 0, numt = 0;
	long long sum = 0;
	
	for (int i = 0; i < str.size(); i++) {
		if (flagp == 0 && str[i] == 'P') {
			beginP = i;
			flagp = 1;
		} 
		if (flagt == 0 && str[str.size()-1-i] == 'T') {
			endT = str.size()-1-i;
			flagt = 1;
		}
		if (flagp && flagt) break;
	}
	
	for (int i = beginP; i <= endT; i++) {
		if (str[i] == 'T') numt++;
	}
	
	for (int i = beginP; i <= endT; i++) {
		if (str[i] == 'P') nump++;
		else if (str[i] == 'T') numt--;
		else if (str[i] == 'A') {
//			for (int j = i+1; j <= endT; j++) {
//				if (str[j] == 'T') numt++;
//			}
			sum += nump * numt;
			//numt = 0;
		}
		
	}
	
	cout << sum % 1000000007;
} 
