//题意:
//	1.题干不是很明确，对于边角的元素，周围并不是八个元素。例如[0][0]元素，只需与 右、下、东南元素相比较即可
// 	2.独一无二的颜色，因此该元素仅出现一次。
//	3.不要把 m 和 n代表的意思搞错了，小陷阱
//	
//解题思路：
//	1.x元素与周围八个元素相比较。在数组中，可以理解为与x的 i，j位置相差仅为 1的元素。用dir数组表示他们与 x差的位置。
//	  用x的位置与差值相加即可得到需比较的元素的位置。先确保该元素存在，不存在的话直接跳至下一位置的元素。存在，若它
//	  与 x的差值小于标准，说明不合格。只要有一个不合格就返回false。当没有不合格的时，才能执行到外头的true。 
//	2.该颜色只出现一次。由于颜色的数值不连续，且范围太大，用二维数组来计数不现实。此处用的是 map 容器。 


#include <iostream>
#include <cstdio>
#include <cmath>
#include <map>
using namespace std;

int dir[8][2] = {{-1,-1}, {-1,0}, {-1,1}, {0,1}, {1,1}, {1,0}, {1,-1}, {0,-1}};
int a[1010][1010];
int m, n, tol;

bool test(int i, int j) {
	for (int k = 0; k < 8; k++) {
		int x = i + dir[k][0];
		int y = j + dir[k][1];
		if (x >=0 && x < n && y >=0 && y < m && fabs(a[i][j] - a[x][y]) <= tol) return false;
	}
	return true;
}

int main() {
	cin >> m >> n >> tol;
	map<int, int> count;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
			count[a[i][j]]++;
		}
	}
	int num=0;
	int x,y;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (count[a[i][j]]== 1 && test(i, j) == true) {
				num++;
				x = i+1; y = j+1;
			}
		}
	}
	
	if (num == 1) {
		printf("(%d, %d): %d", y, x, a[x-1][y-1]);
	} else if (num > 1) {
		printf("Not Unique");
	} else if (num == 0) {
		printf("Not Exist");
	}
	return 0;
}
