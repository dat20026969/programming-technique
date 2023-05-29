#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include "Header.h"
using namespace std;
void nhapMang(int a[], int& n) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void xuatMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << endl;
	}
}
void xoaPhanTu(int a[], int &n, int x) {
	int i = 0;
	while (i < n) {
		if (a[i] == x) {
			a[i] = a[n - 1];
			n--;
		}
		else {
			i++;
		}
	}
}
void chenPhanTu(int a[], int &n, int x){
	int k;
	cin >> k;
	for (int i = n; i >= x; i--){
		a[i] = a[i - 1];
	}
	a[x] = k;
	n++;
	xuatMang(a, n);

}
int soNguyenTo(int n) {
	if (n < 2)
		return 0;
	else {
		for (int i = 2; i <= n / 2; i++){
			if (n % i == 0) {
				return 0;
			}
		return 1;
		}
	}
	return 0;
}
void xoaSoNT(int a[], int &n, int x) {
	for (int i = 0; i < n; i++){
		if (soNguyenTo(a[i])) {
			xoaPhanTu(a, i, n);
			i--;
		}
	}
}
void ghepHaiMang(int a[], int& n, int b[], int& m, int c[], int& k) {
	k = m + n;
	for (int i = 0; i < k; i++) {
		if (i < n) {
			c[i] = a[i];
		}
		else {
			c[i] = b[i - n];
		}
	}
}