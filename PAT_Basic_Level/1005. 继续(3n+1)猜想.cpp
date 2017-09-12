#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(int a, int b) {
	return a > b;
}

int main() {
	vector<int> temp;
	int k;
	cin >> k;
	int a[k];
	for (int i = 0; i < k; i++) {
		cin >> a[i];
	}
	int b[k]={0};
	
	for (int i = 0; i < k; i++) {
		int num = a[i];
		while (num != 1) {
			if (num % 2 == 0) {
				num /= 2;
				if (b[i] == 1) break;//已经验证过的数，直接跳过，验证下一个数 
			} else {
				num = (3*num+1)/2;
				if (b[i] == 1) break;
			}
			for (int i = 0; i < k; i++) {
				if (num == a[i]) {
					b[i] = 1;
				}
			}
		}
	}
	
	for (int i = 0; i < k; i++) {
		if (b[i] == 0) {
			temp.push_back(a[i]);
		}
	}
	sort(temp.begin(), temp.end(), comp);
	
	for (int i = 0; i < temp.size(); i++) {
		if (i == 0) cout << temp[i];
		else cout << " " << temp[i];
	}
	return 0;
}
