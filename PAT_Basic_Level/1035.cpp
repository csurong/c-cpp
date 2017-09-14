#include <iostream> 
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	int num = 0;
	int flag = 0;
	int a[n], b[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i]; 
	} 	
	int flagg = 0;
	for (int i = 0; i < n; i++) {
		cin >> b[i];
		if (b[i] < b[i-1]) {
			flagg = 1;
		}
		if (flagg == 1) {
			if (b[i] == a[i]) {
				num++;
				while (num >= n/2) {
					flag = 1;
					break;
				}
			}
		}
	}
	
	if (flag == 1) {
		cout << "Insertion Sort" << endl;
		int biaoji = 0;
		for (int i = 1; i < n; i++) {
			while (b[i] < b[i-1]) {
				int temp = b[i];
				b[i] = b[i-1];
				b[i-1] = temp;
				i--;
				biaoji = 1;
			}
			if (biaoji == 1) break;
		}
		for (int i = 0; i < n; i++) {
			if (i==0) cout << b[i];
			else cout << " " << b[i];
		}
	} else {
		cout << "Merge Sort" << endl;
		int temp = 0;
		for (int i = 0; i < n; i++) {
			while(b[i] < b[i-1]) {
				temp = i;
				break;
			}
			if (temp != 0) break;
		}
		for (int k = 0; k < n; k++) {
			if (2*temp*k+2*temp > n) break;
			sort(b+2*temp*k, b+2*temp*k+2*temp);
		}
		for (int i = 0; i < n; i++) {
			if (i== 0) cout<< b[i];
			else cout << " " << b[i];
		}
	}
	printf("\n");
	return 0;
}
