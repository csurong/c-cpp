#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

vector<string> winner;
map<string, int> winnercount;

int main() {
	int m, n, s;
	cin >> m >> n >> s;
	cin.get();
	string person[m];
	
	for (int i = 0; i < m; i++) {
		getline(cin, person[i]);
	}
	
	if (s>m) {
		cout << "Keep going..." << endl;
		return 0;
	}
	
	winner.push_back(person[s-1]);
	winnercount[person[s-1]] = 1;
	int position = s-1+n;
	while (position < m) {
		if (winnercount[person[position]] == 1) {
			position += 1;
		} else {
			winner.push_back(person[position]);
			winnercount[person[position]] = 1;
			position += n;
		}
	}
	
	if (winner.size() == 0) {
		cout << "Keep going..." << endl;
	} else {
		for (int i = 0; i < winner.size(); i++) {
			cout << winner[i] << endl;
		}
	}

	return 0;
}
