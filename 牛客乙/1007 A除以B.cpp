#include <iostream>
#include <string>
using namespace std;

int main() {
	int B, Q, R;
	string A;
	cin >> A >> B;
	
	if (A.size() == 1) {
		printf("%d %d", (A[0] - '0') / B, (A[0] - '0') % B);
	} else if (A.size() == 2) {
		printf("%d %d", (10*(A[0]-'0') + (A[1]-'0'))/B, (10*(A[0]-'0') + (A[1]-'0'))%B);
	} else {
		int chushu = 10*(A[0] - '0') + (A[1]-'0');
		int yushu = 0;
		for (int i = 2; i <= A.size(); i++) {
			int shang = chushu / B;
			yushu = chushu % B;
			chushu = yushu * 10 + (A[i]-'0');
			printf("%d", shang);
		}
		printf(" %d", yushu);
	}
} 
