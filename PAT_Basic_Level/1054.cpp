#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	char a[n][50];
	bool b[n] = {false};
	for (int i = 0; i < n; i++) {
		scanf("%s", &a[i]);
		
		if (atof(a[i]) < -1000 || atof(a[i]) > 1000) {
			b[i] = true;
			continue;
		}
		
		int count = 0;//小数点的数目 
		for (int j = 0; j < strlen(a[i]); j++) {
			if (j==0 && a[i][j]=='-') continue;
			if (a[i][j] == '.') {
				count++;
				if (strlen(a[i]) - j > 3) {
					b[i] = true;
					break;
				}
			}
			if (a[i][j] != '.') {
				if (a[i][j] < '0' || a[i][j] > '9') {
					b[i] = true;
					break;
				}
			}
		}
		if (count >= 2) b[i] = true;
	}
	
	
	int num = 0;
	double sum = 0;
	for (int i = 0; i < n; i++) {
		if (b[i] == true) {
			cout << "ERROR: " << a[i] << " is not a legal number" << endl;
		} else {
			num++;
			sum += atof(a[i]);
		}
	}
	
	if (num == 0) {
		cout << "The average of 0 numbers is Undefined";
	} else if (num == 1) {
		cout << "The average of 1 number is ";
		printf("%.2f", sum);
	} else {
		printf("The average of %d numbers is %.2f", num, sum/num);
	}
	
	return 0;
}
