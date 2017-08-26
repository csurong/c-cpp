#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int m, n;
	int height[20][20];
	cin >> m >> n;
	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> height[i][j];
		}
	}

	int all = 0;
	int a[100], b[100];

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			int count = 0;
			if (j-1 >= 0 && height[i][j] >= height[i][j-1]) count++;	//����߱Ƚ�
			if (j+1 <= n-1 && height[i][j] >= height[i][j+1]) count++;	//���ұ߱Ƚ�
			if (i-1 >= 0 && height[i][j] >= height[i-1][j]) count++;
			if (i+1 <= m-1 && height[i][j] >= height[i+1][j]) count++;

			if ((i==0 && j==0) || (i==0 && j==n-1) || (i==m-1 && j==0) || (i==m-1 && j==n-1)) {
				if (count == 2) {
					cout << i << " " << j << endl;
				}
			}//�ı߽ǣ�ֻҪ�������ȽϾ���

			if ((i == 0 && j > 0 && j < n-1) || (j == 0 && i > 0 && i < m-1) || (i == m-1 && j > 0 && j < n-1) || (j == n-1 && i > 0 && i < m-1)) {
				if (count == 3) {
					cout << i << " " << j << endl;
				}
			}//���ϵĲ��֣��������Ƚ�

			if (count == 4) {
				cout << i << " " << j << endl;
			}
		}
	}



	system("pause");
	return 0;
}

//�����Ŀ��ȫ���Է���������ֻҪheight[i][j]��Χ��һ��Ԫ�ز����Ͼ����ˡ��ò������
//#include<stdio.h>
//using namespace std;
//
//int main() {
//    int m, n, i, j;
//    scanf("%d %d", &m, &n);
//    int a[m][n];
//    for (i=0;i<m;i++) {
//        for (j=0;j<n;j++) {
//            scanf("%d", &a[i][j]);
//        }
//    }
//    for (i=0;i<m;i++) {
//        for (j=0;j<n;j++) {
//            bool shan = true;
//            
//            if (shan && i-1>=0) {
//                if (a[i][j]<a[i-1][j]) {
//                    shan = false;
//                }
//            }
//            
//            if (shan && i+1<m) {
//                if (a[i][j]<a[i+1][j]) {
//                    shan = false;
//                }
//            }
//            
//            if (shan && j-1>=0) {
//                if (a[i][j]<a[i][j-1]) {
//                    shan = false;
//                }
//            }
//            
//            if (shan && j+1<n) {
//                if (a[i][j]<a[i][j+1]) {
//                    shan = false;
//                }
//            }
//            
//            if (shan) {
//                printf("%d %d\n", i, j);
//            }
//        }
//    }
//    return 0;
//}