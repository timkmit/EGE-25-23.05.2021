#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int main() {
	int x = 394441;
	int y = 394505;
	int k = 0;
	int k2 = 0;
	int min = 0;

	for (int i = x; i <= y; i++) {
		k = 0;
		for (int j = 1; j < y ; j++) {
			if (i / j == 0) {
				k++;
			}
		}
		if (k2 < k) {
			k2 = k;
			min = i;
		}

	}
	cout << k2 << ' ' << min;


	return 0;
}