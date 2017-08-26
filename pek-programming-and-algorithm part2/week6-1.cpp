#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int m, flag=0; float a;
	int num[50]; float degree[50];
	int count=0;
	int tnum[50]; float tdegree[50];

	cin >> m >> a;

	for (int i = 0; i < m; i++) {
		cin >> num[i] >> degree[i];
	}

	for (int i = 0; i < m; i++) {
		if (degree[i] >= a) {
			flag = 1;
			tnum[count] = num[i];
			tdegree[count] = degree[i];
			count++;
		}
	}

	for (int i = 0; i < count-1; i++) {
		for (int j = 0; j < count-1-i; j++) {
			if (tdegree[j] < tdegree[j+1]) {
				int temp1 = tnum[j];
				tnum[j] = tnum[j+1];
				tnum[j+1] = temp1;

				float temp2 = tdegree[j];
				tdegree[j] = tdegree[j+1];
				tdegree[j+1] = temp2;
			}
		}  
	}

	if (flag == 0) {
		cout << "None.";
	} else {
		for (int i = 0; i < count; i++) {
			cout << setfill('0') << setw(3);
			cout << tnum[i] << " " ;
			cout << fixed << setprecision(1) << tdegree[i] << endl;
		}
	}

	return 0;
}