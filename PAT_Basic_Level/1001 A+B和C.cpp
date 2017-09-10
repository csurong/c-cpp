#include <iostream>
using namespace std;

int main() {
	int t;
	long int a, b, c;
	
	cin >> t;
	int result[t];
	
	for (int i = 0; i < t; i++) {
		cin >> a >> b >> c;
		if (a + b > c) {
			result[i] = 1;
		} else {
			result[i] = 0;
		} 
	}
	
	for (int i = 0; i < t; i++) {
		if (result[i] == 1)
			cout << "Case #" << i+1 << ": true" << endl;
		else 
			cout << "Case #" << i+1 << ": false" << endl;
	} 
	
	return 0;
} 
