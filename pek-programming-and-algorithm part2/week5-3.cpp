#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main() {
	int n;
	
	cin >> n;
	int sum = 0;

	for (int i = 0; i < n; i++) {
		char word[40] = {0};
		cin >> word;

		if (i == 0) {
			sum = strlen(word);
			cout << word;
			continue;
		}

		if (sum + strlen(word) <= 79) {
			sum += strlen(word);	//把单词的长度加上去
			cout << " " << word;	//输出空格和单词
			sum++;					//把空格的长度加上去
		} else if (sum == 80) {
			sum = strlen(word);
			cout << word;
		} else if (sum + strlen(word) >= 80) {
			cout << endl;
			sum = strlen(word);
			cout << word;
		}
	}
	system("pause");
	return 0;
}