#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int);

bool isPrime(int num) {
	bool flag = true;
	int end = sqrt((double)num);
	for (int i = 2; i <= end; i++) {
		if (num % i == 0) {
			flag = false;
			break;
		}
	}
	return flag;
}

int main() {
	int count = 0, num = 0;
	int a[10001]={0};
	int i = 2;
	while(count <= 10000) {
		if(isPrime(i)) {
			count++;
			a[num] = i;
			num++;	//准备下一个素数数组下标 
		}
		i++;	//下一个数 
	}
	
	int m, n;
	cin >> m >> n;
	int position = 0;
	for (int i = m; i <=n; i++) {
		if (position == 0) {
			cout << a[i-1]; position++;
		} else if (position == 9) {
			cout << " " << a[i-1] << endl; position = 0;
		} else {
			cout << " " << a[i-1]; position++;
		}
	} 
}
