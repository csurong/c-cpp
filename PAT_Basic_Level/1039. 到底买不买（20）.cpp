#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	string str1, str2;
	getline(cin, str1);
	getline(cin, str2);
	int laoban[62]={0};
	int hong[62] = {0};
	
	for (int i = 0; i < str1.size(); i++) {
		if (str1[i] >= '0' && str1[i] <= '9') {
			int num = str1[i] - '0';
			laoban[num]++;
		} else if (str1[i] >= 'a' && str1[i] <= 'z') {
			int num = str1[i] - 'a' + 10;
			laoban[num]++;
		} else if (str1[i] >= 'A' && str1[i] <= 'Z') {
			int num = str1[i] - 'A' + 36;
			laoban[num]++;
		}
	}
	
	for (int i = 0; i < str2.size(); i++) {
		if (str2[i] >= '0' && str2[i] <= '9') {
			int num = str2[i] - '0';
			hong[num]++;
		} else if (str2[i] >= 'a' && str2[i] <= 'z') {
			int num = str2[i] - 'a' + 10;
			hong[num]++;
		} else if (str2[i] >= 'A' && str2[i] <= 'Z') {
			int num = str2[i] - 'A' + 36;
			hong[num]++;
		}
	}
	//只有当缺珠子的时候，多余的颜色的统计才有意义，就是hong[i]=0的情况，此时temp<0，不会影响缺颜色珠子的统计。 
	int duo = 0, shao = 0;
	int flag = 1;//默认是够的 
	for (int i = 0; i < 62; i++) {
		//if (hong[i] == 0) continue;
		int temp = hong[i] - laoban[i];// 
		if (temp < 0) { 
			duo -=  temp;
		}
		else if (temp > 0) {
			shao += temp;
			flag = 0;
		} 
	}
	
	if (flag == 0) {
		cout << "No " << shao;
	} else {
		cout << "Yes " << duo;
	}
	return 0;
}
