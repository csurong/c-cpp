#include <iostream> 
using namespace std;

int cal(int num, int D) {
	int a = num % D;
	int b = num / D;
	if (b == 0) {
		cout << num;
		return 0;
	}
	cal(b, D);
	cout << a;
	return 0;
}

int main() {
	int A, B, D;
	cin >> A >> B >> D;
	cal(A+B, D);
	return 0;
}
