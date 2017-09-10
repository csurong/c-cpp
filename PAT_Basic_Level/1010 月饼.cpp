#include <iostream>
using namespace std;

int main() {
	int N, D;
	float allprice = 0;
	cin >> N >> D;
	float count[N], price[N], oneprice[N];;
	for (int i = 0; i < N; i++) {
		cin >> count[i];
	} 
	for (int i = 0; i < N; i++) {
		cin >> price[i];
		oneprice[i] = price[i] / count[i];
	}
	
	while (D > 0) {
		float max = 0; int flag = 0;
		for (int i = 0; i < N; i++) {
			if (oneprice[i] > max) {
				max = oneprice[i];	//赋值运算会把右边的表达式转换成左边变量的类型，这里起初 max 给的int造成直接省略了oneprice的小数  
				flag = i;
			}
		}
		if (count[flag] >= D) {
			allprice += D * oneprice[flag];
			D = 0;
		} else if (count[flag] < D) {
			allprice += price[flag];
			D -= count[flag];
		}
		oneprice[flag] = 0;
	}
	printf("%.2f", allprice);
} 
