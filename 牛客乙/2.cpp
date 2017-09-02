#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

void funa1(int, int);
void funa2(int, int);
void funa3(int, int);
void funa4(int, int);
void funa5(int, int);

void funa1(int *p, int m) {
	int sum = 0, count=0;
	for (int i = 0; i < m; i++) {
		if (*(p+i)%5 == 0 && *(p+i)%2 == 0) {
			sum += *(p+i);
			count++;
		}
	}
	if (count == 0) {
		cout << "N" << " ";
	} else {
		cout << sum << " ";	
	}
}

void funa2(int *p, int n) {
	int count = 1, sum = 0;
	for (int i = 0; i < n; i++) {
		if (*(p+i)%5 == 1 && count % 2 == 1) {
			sum += *(p+i); count++;
		} else if (*(p+i)%5 == 1 && count % 2 == 0) {
			sum -= *(p+i); count++; 
		}
	}
	if (count == 1) {
		cout << "N" << " ";
	} else {
		cout << sum << " ";		
	}
}

void funa3(int *p, int n) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (*(p+i) % 5 == 2) {
			count++;
		}
	}
	cout << count << " ";
}

void funa4(int *p, int n) {
	float sum = 0; int count = 0;
	for (int i = 0; i < n; i++) {
		if (*(p+i) % 5 == 3) {
			sum += *(p+i); count++;
		}
	}
	if (count == 0) {
		cout << "N" << " ";
	} else {
		cout << fixed << setprecision(1) << sum/count << " ";	
	}
}

void funa5(int *p, int n) {
	int max=0;
	for (int i = 0; i < n; i++) {
		if (*(p+i) % 5 == 4 && *(p+i) > max) {
			max = *(p+i);
		}
	}
	if (max == 0) {
		cout << "N";
	} else {
		cout << max;		
	}
}

int main() {
	int n;
	cin >> n;
	
	int a[n];
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	funa1(a, n);
	funa2(a, n);
	funa3(a, n);
	funa4(a, n);
	funa5(a, n);
	
	return 0;
}
