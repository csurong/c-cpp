#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int a, b, result;
	char c;
	cin >> a >> b >> c;
	
	if (c == '+') {
		result = a + b;
	} else if (c == '-') {
		result = a - b;
	} else if (c == '*') {
		result = a * b;
	} else if (c == '/') {
		if (b == 0) {
			cout << "Divided by zero";
			return 0;
		}
		result = a / b;
	} else {
		cout << "Invalid operator";
		return 0;
	}
	cout << result;
	return 0;
}