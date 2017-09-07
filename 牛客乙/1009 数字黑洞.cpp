#include <iostream>
#include <algorithm>
#include <math.h> 
#include <iomanip>
//#include <stdio.h>
using namespace std;

int main() {
	int num, arr[4];
	cin >> num;
	do {
		for (int newnum=num, i=0; i < 4; i++) {
			arr[i] = newnum % 10;
			newnum /= 10;
		}
		sort(arr, arr+4);
		
		int num1 = 0;
		for (int i = 0; i < 4; i++) {
			num1 += arr[3-i]*pow(10, i);
		}
		int num2 = 0;
		for (int i = 0; i < 4; i++) {
			num2 += arr[i]*pow(10, i);
		}
		num = num2 - num1;
		printf("%4.4d - %4.4d = %4.4d\n", num2, num1, num);
		//cout << num; system("pause");
	} while (num != 0 && num != 6174);
	return 0;
} 
