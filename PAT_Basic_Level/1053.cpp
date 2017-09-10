#include <iostream>
using namespace std;
int main() {
	float n, e, d;
	cin >> n >> e >> d;
	int kong = 0, maykong = 0;
	for (int i = 0; i < n; i++) {
		int days, countdays = 0;
		bool possible = false, absolute = false;
		cin >> days;
		if (days > d) absolute = true;
		float every[days];
		for (int j = 0; j < days; j++) {
			cin >> every[j];
			if (every[j] < e) countdays++;
		}
		if (countdays > days/2) possible = true;
		if (possible && absolute) {
			kong++;
		} else if (possible && !absolute) {
			maykong++;
		} 
	}
	printf("%.1f%%", maykong*100/n);
	printf(" %.1f%%", kong*100/n);
	return 0;
} 
