#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float r1, p1, r2, p2;
	cin >> r1 >> p1 >> r2 >> p2;
	float a = r1*r2*cos(p1+p2);
	float b = r1*r2*sin(p1+p2);
	
	
	if (a==b && a==0) {
		cout << 0;
		return 0;
	} else if (a==0) {
		printf("%.2fi", b);
		return 0;
	} else {
		if (b < 0) {
			printf("%.2f%.2fi", a, b);
		} else {
			printf("%.2f+%.2fi", a, b);
		}
	}
	
	return 0;
} 
