#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	int N = 0; float K = 0;
	while ( cin >> N >> K) {
		int allN = 0, years = 0;
		float needMoney = 200;
		while (allN < needMoney) {
			years += 1;
			allN = N * years;
			float k = K;
			if (years > 1) 
			needMoney = needMoney * (1 + (float)K / 100);
			if (years > 20) {
				break;
			}
		}
		if (years <= 20) {
			cout << years << endl;
		} else {
			cout << "Impossible" << endl;
		}
	
	}
		
}