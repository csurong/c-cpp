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
				max = oneprice[i];	//��ֵ�������ұߵı��ʽת������߱��������ͣ�������� max ����int���ֱ��ʡ����oneprice��С��  
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
