#include <iostream>
using namespace std;

int getnum(char a[]) {
	int i = 0, num = 0;
	while (a[i] != '\0') {
		if (a[i] == '[') {
			num += 1;
		}
		i++;
	}
	return num;
}

int print(char a[], int num) {
	int i = 0, count = 0;
	while (a[i] != '\0') {
		if (a[i] == '[') {
			count++;
		} else if (a[i] != ']' && count == num) {
			printf("%c", a[i]);
		} else if (a[i] == ']' && count == num) {
			return 0;
		}
		i++;
	}
	return 0;
}

int main() {
	char hand[50], eye[50], mouth[50];
	gets(hand); gets(eye); gets(mouth);
	
	int handnum = getnum(hand);
	int eyenum = getnum(eye);
	int mouthnum = getnum(mouth);
	
	int k;
	cin >> k;
	
	for (int i = 0; i < k; i++) {
		int id1, id2, id3, id4, id5;
		cin >> id1 >> id2 >> id3 >> id4 >> id5;
		
		if (id1 > 0 && id1 <= handnum && id2 > 0 &&  id2 <= eyenum && id3 > 0 && id3 <= mouthnum && id4 > 0 &&  id4 <= eyenum && id5 > 0 &&  id5 <= handnum) {
			print(hand, id1);
			printf("(");
			print(eye, id2);
			print(mouth, id3);
			print(eye, id4);
			printf(")");
			print(hand, id5);
			printf("\n"); 
		} else {
			cout << "Are you kidding me? @\\/@" << endl;
		}
	}
	return 0;
}
