#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
	int n, a[10000], b[10000];
	cout << "Nhap n: " << endl;
	cin >> n;
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 15 + 1;
	}
	b[0] = 1;
	int max;
	for(int i = 1; i < n;i++){
		max = 0;
		for (int j = 0; j < i; j++) {
			if (a[i] < a[j]) {
				if (b[j] > max) {
					max = b[j];
				}
			}
		}
		b[i] = max + 1;
	}
	for (int i = 0; i < n; i++) {
		cout << a[i];
		cout << endl;
	}
	for (int i = 0; i < n; i++) {
		cout << b[i];
	}
	int doDaiMax = 0;
	for (int i = 0; i < n; i++) {
		if (b[i] > doDaiMax) {
			doDaiMax = b[i];
		}
	}
	cout << "Do dai day con khong giam dai nhat la: " << doDaiMax << endl;
	return 0;
}