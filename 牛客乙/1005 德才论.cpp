#include <iostream>
#include <algorithm>
using namespace std;

struct student {
	int number;
	int dei;
	int cai;
	int sum;
	int level;
};

bool compare(student a, student b) {
	if (a.level != b.level) 
		return a.level < b.level;
	else if (a.sum != b.sum)
		return a.sum > b.sum;
	else if (a.dei != b.dei)
		return a.dei > b.dei;
	else 
		return a.number < b.number;
}
	
int main() {
	int N, L, H;
	int count=0;
	scanf("%d%d%d", &N, &L, &H);
	//cin >> N >> L >> H;
	student stu[N];
	for (int i = 0; i < N; i++) {
		//cin >> stu[i].number >> stu[i].dei >> stu[i].cai;
		scanf("%d%d%d", &stu[i].number, &stu[i].dei, &stu[i].cai);
		stu[i].sum = stu[i].dei + stu[i].cai;
		if (stu[i].dei >= L && stu[i].cai >= L) {
			count++;
			if (stu[i].dei >= H && stu[i].cai >= H) 
				stu[i].level = 1;
			else if (stu[i].dei >= H && stu[i].cai < H) 
				stu[i].level = 2;
			else if (stu[i].dei < H && stu[i].cai < H &&  stu[i].dei >= stu[i].cai)
				stu[i].level = 3;
			else 
				stu[i].level = 4;
		} else { 
			stu[i].level = 5;
		}
	}
	
	sort(stu, stu+N, compare);
	//cout << count;
	printf("%d", count);
	for (int i = 0; i < count; i++) {
		//cout << endl << stu[i].number << " " << stu[i].dei << " " << stu[i].cai;
		printf("\n%d %d %d", stu[i].number, stu[i].dei, stu[i].cai);
	}
	return 0;
}
