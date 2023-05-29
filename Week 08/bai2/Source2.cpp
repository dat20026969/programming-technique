#include <iostream>
#include <iomanip>
#include <cmath>
#include "bai2.h"
using namespace std;
int bai2_cach1_dequy(int n) {
	if (n < 0) {
		return -1;
	}
	if (n == 0) {
		return 1;
	}
	if (n == 1) {
		return 2;
	}
	if (n > 1) {
		return (2 * bai2_cach1_dequy(n - 1) + 3 * bai2_cach1_dequy(n - 2));
	}
}
int bai2_cach2_khongdequy(int n) {
	int*f = new int[n+1];
	f[0]= 1;
	f[1]=2;

	for (int i = 2; i <= n; ++i) {
		f[i] = 2 * f[i-1] + 3 * f[i-2];
	}
	int m = f[n];
		delete[] f;
	return m;
}