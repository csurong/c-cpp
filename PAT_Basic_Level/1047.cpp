#include <iostream>
using namespace std;

int main() {
	int num[1010]={0};
	int n;
	cin >> n;
	
	int maxdui=0, maxfen=0;
	for (int i = 0; i < n; i++) {
		int a, b, c;
		scanf("%d-%d %d", &a, &b, &c);
		num[a] += c;
		if (num[a] > maxfen) {
			maxfen = num[a];
			maxdui = a;
		}
	}
	cout << maxdui << " " << maxfen;
	return 0;
} 
