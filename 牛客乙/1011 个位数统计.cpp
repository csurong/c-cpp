#include <iostream>
#include <string>
using namespace std;

int main() {
	string N;
	int a[10] = {0};
	cin >> N;
	for (int i = 0; i < N.size(); i++) {
		int num = N[i] - '0';;
		a[num]++;
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < N.size(); j++) {
			if (i == N[j]-'0') {
				cout << i << ":" << a[i] << endl;
				break;
			}
		}
	}
	return 0;
} 
