#include <iostream>
#include <string>
using namespace std;

int main() {
	string password;
	int n, num = 0;
	cin >> password >> n;
	cin.get();
	while(1) {
		string temp;
//		cin >> temp;
//		cin.get();
		getline(cin, temp, '\n');
		num++;
		if (temp == "#") {
			return 0;
		} else if (temp == password) {
			cout << "Welcome in";
			return 0; 
		} else if (temp != password) {
			cout << "Wrong password: " << temp << endl;
			if (num == n) {
				cout << "Account locked";
				return 0;
			}
		}
	}
} 
