#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int d = 0, h = 0, b = 0, t = 0;

	for (d = 1; d <= 4; d++)
		for (h = 1; h <= 4; h++)
			for (b = 1; b <= 4; b++)
				for (t = 1; t <= 4; t++) {
					int A = (d == 1) + (h == 4) + (b == 3);
					int B = (h == 1) + (d == 4) + (b == 2) + (t == 3);
					int C = (h == 4) + (d == 3);
					int D = (b == 1) + (t == 4) + (h == 2) + (d == 3);
					if ((A * B * C * D == 1) && (d != h) && (d != b) && (d != t) && (h != b) && (h != t) && (b != t)) {
						cout << b << endl << d << endl<< t << endl << h;
					}//ABCD相加为4就不行，相乘为1就行.相加为4有等于0的情况，毕竟是布尔值
				}
	system("pause");
	return 0;
}