#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

struct guest {
	int id;
	int partner;
};

int main() {
	int n, num=0;
	scanf("%d", &n);
	//cin >> n;
	guest pair[n*2];
	for (int i = 0; i < 2*n; i++) {
		scanf("%d", &pair[i].id);
		//cin >> pair[i].id; 
		if (i%2==1) {
			pair[i].partner = pair[i-1].id;
			pair[i-1].partner = pair[i].id;
		}
	}
//	for (int i = 0; i < 2*n; i++) {
//		if (i%2 == 0) {
//			pair[i].partner = pair[i+1].id;
//		} else {
//			pair[i].partner = pair[i-1].id;
//		}
//	}
	
	int m, count=0;
	scanf("%d", &m);
	//cin >> m;
	int a[m];
	for (int i = 0; i < m; i++) {
		scanf("%d", &a[i]);
		//cin >> a[i];//记录出席的人id 
	}

	for (int i = 0; i < m; i++) {//出席的人 
		if (a[i]==0) continue; 
		for (int j = 0; j < 2*n; j++) {//有伴的人 
			if (a[j]==0) continue;
			if (a[i] != pair[j].id) continue;
			for (int k = 0; k < m; k++) {//看出席的人中有没有自己的伴侣 
				if (a[k]==0) continue;
				if (pair[j].partner == a[k]) {  //若出席的人的 id 等于有伴侣的人的id，并且伴侣的id出现在出席的人之中
					a[i] = 0;
					a[k] = 0;//将他和他的伴侣都置 0 
					count++;//配对的对数 
				}
			}
		}
	}
	sort(a, a+m);
	
	printf("%d\n", m-2*count);
	//cout << m-2*count << endl;
	int temp = 0;
	for (int i=0; i < m; i++) {
		if (a[i] == 0) continue;
		if (temp == 0) {
			printf("%d", a[i]);
			//cout << a[i]; 
		} else {
			printf(" %d", a[i]); 
			//cout << " " << a[i];
		}
		temp++;
	}
	return 0;
}
