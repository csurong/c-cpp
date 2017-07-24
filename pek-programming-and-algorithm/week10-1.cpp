#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	char s[80];
	cin.getline(s, 80);
	int a1 = 0, e1 = 0, i1 = 0, o1 = 0, u1 = 0;
	for (int i = 0; i < 80; i++) {
		if (s[i] == 'a') {
			a1++;
		} else if (s[i] == 'e') {
			e1++;
		} else if (s[i] == 'i') {
			i1++;
		} else if (s[i] == 'o') {
			o1++;
		} else if (s[i] == 'u') {
			u1++;
		}
	}
	cout << a1 << ' ' << e1 << ' ' << i1 << ' ' << o1 << ' ' << u1;
}