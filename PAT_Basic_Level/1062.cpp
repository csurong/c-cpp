#include <iostream>
using namespace std;

int myfun(int a, int b) {
	if (b==0) {
		return a;
	}
	return myfun(b, a%b);
}

int main() {
	int n1, m1, n2, m2, k;
	scanf("%d/%d %d/%d %d", &n1, &m1, &n2, &m2, &k);
	
	double fenzi1 = (double)n1*k/m1;
	double fenzi2 = (double)n2*k/m2;
	double max, min;
	double fenzi;
	
	if (fenzi1 > fenzi2) {
		max = fenzi1;
		min = fenzi2;
	}
	else {
		max = fenzi2;
		min = fenzi1;
	}
	
	min = (int)min+1;
	
	if (max - (int)max == 0) {
		max = max - 1;
	}
	int count = 0;
	for (int i = min; i <= max; i++) {
		if (myfun(i, k) == 1) {
			count++;
			if (count == 1) {
				printf("%d/%d", i, k);
			} else {
				printf(" %d/%d", i, k);
			}
		}
	}
	printf("\n");
	return 0;
}
