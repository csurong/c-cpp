#include <iostream>
#include <cstdio>
using namespace std;

int judge(int a, int b) {
//	while(a != b) {
//		if (a > b) 
//			a = a-b;
//		else 
//			b = b-a;
//	}
//	return a;
	while(1) {
		int t = a % b;
		if (t == 0) {
			return b;
		} else {
			a = b; 
			b = t;
		}
	}
}

int main() {
	float n1, m1, n2, m2;
	int k;
	int num = 0;
	scanf("%f/%f %f/%f %d", &n1, &m1, &n2, &m2, &k);
	for (int i = n1*k/m1; i <= n2*k/m2; i++) {
		//if (i == n1/m1) continue;
		if (judge(i, k) == 1) {
			num++;
			if (num==1) 
				printf("%d/%d", i, k);
			else 
				printf(" %d/%d", i, k);
		}
	}
	return 0; 
}

