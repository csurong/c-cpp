//����:
//	1.��ɲ��Ǻ���ȷ�����ڱ߽ǵ�Ԫ�أ���Χ�����ǰ˸�Ԫ�ء�����[0][0]Ԫ�أ�ֻ���� �ҡ��¡�����Ԫ����Ƚϼ���
// 	2.��һ�޶�����ɫ����˸�Ԫ�ؽ�����һ�Ρ�
//	3.��Ҫ�� m �� n�������˼����ˣ�С����
//	
//����˼·��
//	1.xԪ������Χ�˸�Ԫ����Ƚϡ��������У��������Ϊ��x�� i��jλ������Ϊ 1��Ԫ�ء���dir�����ʾ������ x���λ�á�
//	  ��x��λ�����ֵ��Ӽ��ɵõ���Ƚϵ�Ԫ�ص�λ�á���ȷ����Ԫ�ش��ڣ������ڵĻ�ֱ��������һλ�õ�Ԫ�ء����ڣ�����
//	  �� x�Ĳ�ֵС�ڱ�׼��˵�����ϸ�ֻҪ��һ�����ϸ�ͷ���false����û�в��ϸ��ʱ������ִ�е���ͷ��true�� 
//	2.����ɫֻ����һ�Ρ�������ɫ����ֵ���������ҷ�Χ̫���ö�ά��������������ʵ���˴��õ��� map ������ 


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
