//本题是对的，只是我把 锤子（C）换成了 石头（S），因此注意数组顺序 BCJ 和相应值要据此修改 

#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int countA[3]={0}, countB[3]={0};
	int countABJS[3]={0}, countBBJS[3]={0};
		for (int i = 0; i < N; i++) {
		char a, b; 
		cin >> a >> b; 
		if (a == b) {
			countA[1]++;
			countB[1]++;
		} else if (a=='B' && b=='S') {//a
			countABJS[0]++;
			countA[0]++;
			countB[2]++;
		} else if (a=='B' && b=='J') {//j
			countBBJS[1]++;
			countA[2]++;
			countB[0]++;
		} else if (a=='J' && b=='B') {//j
			countABJS[1]++;
			countA[0]++;
			countB[2]++;
		} else if (a=='J' && b=='S') {//s
			countBBJS[2]++;
			countA[2]++;
			countB[0]++;
		} else if (a=='S' && b=='B') {//b
			countBBJS[0]++;
			countA[2]++;
			countB[0]++;
		} else if (a=='S' && b=='J') {//s
			countABJS[2]++;
			countA[0]++;
			countB[2]++;
		}
	}
	int maxA = -1, flagA = 0;
	int maxB = -1, flagB = 0;
	for (int i = 0; i < 3; i++) {
		if (countABJS[i] > maxA) {
			maxA=countABJS[i];
			flagA = i;
		}
		if (countBBJS[i] > maxB) {
			maxB=countBBJS[i];
			flagB = i;
		}
	}
	char choose[3] = {'B', 'J', 'S'};
	cout << countA[0] << " " << countA[1] << " " << countA[2] << endl;
	cout << countB[0] << " " << countB[1] << " " << countB[2] << endl;
	cout << choose[flagA] << " " << choose[flagB];
} 
