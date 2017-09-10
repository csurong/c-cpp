#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int sum=0;
	getline(cin, str);
	for (int i = 0; i < str.size(); i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			sum += str[i]-'a' + 1;
		} else if (str[i] >= 'A' && str[i] <= 'Z') {
			sum += str[i] - 'A' + 1;
		}
	}
	
	int count0=0, count1=0;
	while (sum != 0) {
		if (sum%2 == 0) {
			count0++;
		} else if (sum%2 == 1) {
			count1++;
		}
		sum /= 2;
	}
	cout << count0 << " " << count1;
	return 0;
} 
