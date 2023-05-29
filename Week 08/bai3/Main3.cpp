#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>
#include <vector>
#include <set>
#include <random>
#include "bai3.h"
using namespace std;
int main() {
	int n;
	cout << "Nhap so phan tu n: " << endl;
	cin >> n;	
	int* p = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap phan tu: " << endl;
		cin >> p[i];
	}
	
	tichLonNhat(p, n);
	delete[]p;
	return 0;
}