#include <iostream> 
using namespace std;

int main() {
	int m, n, he = 0;
	cin >> m >> n;
	
	for (int i = m; i <= n; i++) {
		if (i % 2 == 1) {
			he += i;
		}
	}
	cout << he;
	return 0;
}
