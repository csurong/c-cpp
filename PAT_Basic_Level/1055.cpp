#include <iostream>
#include <algorithm>
using namespace std;

struct student {
	string name;
	int height;
};

bool comp (student a, student b) {
	if (a.height != b.height) {
		return a.height > b.height;
	}
	return a.name < b.name;
}

int main() {
	int n, k;
	cin >> n >> k;
	student stu[n];
	for (int i = 0; i < n; i++) {
		cin >> stu[i].name >> stu[i].height;
	}
	
	sort(stu, stu+n, comp);
	
	int meipai = n/k;
	int finpai = n/k + n%k;
	
	int num = n, count=0;
	while (count != n) {
		string thepai;
		if (num == n) {//最后一排时 
			thepai += stu[0].name; num--;count++;
			for (int i = 0; i < finpai-1; i++) {
				if ((i+1)%2 != 0) {
					thepai = stu[count].name + " " + thepai; num--;count++;
				} else {
					thepai = thepai + " " + stu[count].name; num--;count++;
				}
			}
			cout << thepai << endl;
		} else {//其它排时 
			thepai += stu[count].name; num--;count++;
			for (int i = 0; i < meipai-1; i++) {
				if ((i+1)%2 != 0) {
					thepai = stu[count].name + " " + thepai; num--;count++;
				} else {
					thepai = thepai + " " + stu[count].name; num--;count++;
				}
			}
			cout << thepai << endl;
		}
	}
	return 0;
}
