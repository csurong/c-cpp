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
			sum += strlen(word);	//�ѵ��ʵĳ��ȼ���ȥ
			cout << " " << word;	//����ո�͵���
			sum++;					//�ѿո�ĳ��ȼ���ȥ
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