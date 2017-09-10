#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
	int A, Da, B, Db;
	scanf("%d%d%d%d", &A, &Da, &B, &Db);
	
	int countDa = 0, Pa = 0;
	
	while (A != 0) {
		if (A % 10 == Da) {
			Pa += Da * pow(10, countDa);
			countDa++;
		}
		A /= 10;
	} 
	
	int countDb = 0, Pb = 0;
	
	while (B != 0) {
		if (B % 10 == Db) {
			Pb += Db * pow(10, countDb);
			countDb++;
		}
		B /= 10;
	} 
	printf("%d", Pa+Pb);
} 
