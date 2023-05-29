#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>
#include <vector>
#include <set>
#include <random>
#include "bai3.h"
using namespace std;
void tichLonNhat(int a[], int n) {
	
	for (int i = 1; i <= n; i++) {
		cout << "Nhap phan tu thu:" << i << endl;
		cin >> *(a + i);
	}
	int b = 0;
	int c = 0;
	int max = 0;
	for (int i = 1; i < n; i++) {
		for (int j = i + 1; j <= n; j++) {
			if (*(a + i) * *(a + j) > max) {
				max = *(a + i) * *(a + j);
				b = *(a + i);
				c = *(a + j);
			}
		}
	}
	cout << "Ket qua 2 so la: " << b << " " << c << endl;


}