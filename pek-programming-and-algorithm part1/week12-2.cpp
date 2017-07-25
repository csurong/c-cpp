#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int n;
	while(cin >> n){
		int num = 0;
		if (n % 3 == 0) {
			cout << "3 ";
			num++;
		}
		if (n % 5 == 0) {
			cout << "5 ";
			num++;
		}
		if (n % 7 == 0) {
			cout << '7';
			num++;
		}
		if (num == 0) {
			cout << 'n';
		}
	}
}