#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	char s1[80], s2[80];
	cin.getline(s1, 80);
	cin.getline(s2, 80);

	int i = 0;
	while (s1[i] != '\0') {
		if (s1[i] >= 97 && s1[i] <= 122) {
			s1[i] -= 32;
		}
		if (s2[i] >= 97 && s2[i] <= 122) {
			s2[i] -= 32;
		}
		if (s1[i] > s2[i]) {
			cout << '>';
			return 0;
		} else if (s1[i] < s2[i]) {
			cout << '<';
			return 0;
		} else {
			i++;
		}
	}
	if (s2[i] == '\0') {
		cout << '=';
	} else {
		cout << '<';
	}
}