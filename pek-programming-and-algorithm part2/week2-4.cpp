#include <stdio.h>
#include <stdlib.h>
int main() {
	int year, month, day;
	int table[2][12]={
		{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},//0Æ½
		{31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}//1Èò
	};
	int isLeapYear, daysOfMonth;
	scanf ("%d-%d-%d", &year, &month, &day);

	isLeapYear = (year%4==0 && year%100 != 0 || year%400==0);//1ÎªÈò
	daysOfMonth = table[isLeapYear][month-1];
	day += 1;
	if (day > daysOfMonth) {
		month++;
		day = 1;
	}
	if (month > 12) {
		month = 1;
		year++;
	}
	printf("%d-%02d-%02d", year, month, day);
	system("pause");
	return 0;
}