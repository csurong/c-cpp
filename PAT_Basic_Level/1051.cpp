#include <iostream> 
#include <cmath>
using namespace std;

int main() {
	double r1, p1, r2, p2;
	cin >> r1 >> p1 >> r2 >> p2;
	double mool = fabs(r1*r2);
	double shibu = mool * cos(p1+p2);
	double xubu = mool * sin(p1+p2);
	
	if (shibu >= -0.01 && shibu < 0) {
		shibu = 0;
	}
	
	if (xubu >= -0.01 && xubu < 0) {
		xubu = 0;
	}
	
	if (xubu < 0) {
		printf("%.2f%.2fi", shibu, xubu);
	} else {
		printf("%.2f+%.2fi", shibu, xubu);
	}
	printf("\n");
	
	return 0;
}
