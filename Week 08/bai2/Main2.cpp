#include <iostream>
#include <iomanip>
#include <cmath>
#include "bai2.h"
using namespace std;
int main() {
	int a;
	cout << "Nhap so a: " << endl;
	cin >> a;
	cout << "Ket qua cach 1 la: " << bai2_cach1_dequy(a) << endl;
	cout << "Ket qua cach 2, khong de quy la: " << bai2_cach2_khongdequy(a) << endl;
	return 0;
}