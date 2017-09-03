#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

void funWeek(char str) {
	int num = str - 65;
	const char a[7][4] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
	cout << a[num] << " ";
} 

void funClock(char str) {
	if (str >= 48 && str <= 57) {
		int num = str - 48;
		cout << setfill('0') << setw(2);
		cout << num;
		cout << ":";
	} else if (str >= 65 && str <= 78) {
		int num = str - 65 + 10;
		cout << num << ":";
	}
}

void funMinute(int num) {
	cout << setfill('0') << setw(2);
	cout << num;
}

int main() {
    char a[4][60];
    for (int i = 0; i < 4; i++) {
    	cin.getline(a[i], 60);
	}
	
	int count = 0;
	
	for (int i = 0; i < strlen(a[0]); i++) {
		if (a[0][i] == a[1][i] && a[0][i] >= 65 && a[0][i] <= 71 && count == 0) {
			funWeek(a[0][i]);	//求星期几的函数
			count++;
			continue;	//跳出防止重复 
		}
		if (count == 1 && a[0][i] == a[1][i] && ((a[0][i] >= 48 && a[0][i] <= 57) || (a[0][i] >= 65 && a[0][i] <= 78))) {
			funClock(a[0][i]);	//求钟头的函数
			count++;
		}
		
		if (count == 2) {
			break;
		}
	}
	
	for (int i = 0; i < strlen(a[2]); i++) {
		if (a[2][i] == a[3][i] && ((a[2][i] >= 65 && a[2][i] <=90) || (a[2][i] >= 96 && a[2][i] <= 122))) {
			funMinute(i);	//求分钟的函数
			break;
		}
	}
	
	return 0;
}
