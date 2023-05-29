#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include "Header.h"
using namespace std;

int main() {
	int a, b[1000], c[1000], d[1000], x, x1, x2, y, z;
	cin >> x >> x1 >> x2;
	nhapMang(b, a);
	nhapMang(c, y);
	xuatMang(b, a);
	xoaPhanTu(b, a, x);
	chenPhanTu(b, a, x1);
	xoaSoNT(b, a, x2);
	ghepHaiMang(b, a, c, y, d, z);
	xuatMang(d, z);
	return 0;
}