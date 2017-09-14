#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int a[100000]={0};
	int b[100000]={0};
	int c[100000]={0};
	int n;
	cin >> n;
	vector<int> finid;
	
	for (int i = 0; i < n; i++) {
		int temp1, temp2;
		cin >> temp1 >> temp2;
		a[temp1] = temp2;
		a[temp2] = temp1;
		b[temp1] = 1;
		b[temp2] = 1;
	}
	
	int m;
	cin >> m;
	int id[m];
	for (int i = 0; i < m; i++) {
		int temp;
		cin >> temp;
		id[i] = temp;
		c[temp] = 1;
	}
	
	for (int i = 0; i < m; i++) {
		if (b[id[i]] == 1 && c[a[id[i]]] == 0) {//若有伴侣，且伴侣没有出席 
			finid.push_back(id[i]);
		} else if (b[id[i]] == 0) {//若没有伴侣 
			finid.push_back(id[i]); 
		} else {
			continue;
		}	
	}
	sort(finid.begin(), finid.end());
	cout << finid.size() << endl;
	for (int i = 0; i < finid.size(); i++) {
		if (i==0) {
			printf("%.5d", finid[0]);
		} else {
			printf(" %.5d", finid[i]);
		}
	}
	return 0;
}
