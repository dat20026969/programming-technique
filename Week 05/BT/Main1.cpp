#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
using namespace std;
void nhapMang(int a[], int& n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void xuatMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << endl;
	}
}
bool soNguyenTo(int n) {
	if (n < 2) {
		return false;
	}
	else {
		for (int i = 2; i < n; i++) {
			if (n % i == 0) {
				return false;
			}
		}
	}
	return true;
}
int demSoNguyenTo(int a[], int n) {
	int count = 0;
	for (int i = 0; i < n; i++){
		if (soNguyenTo(a[i])){
			count++;
		}
	}
	return count;
}

void lietKeSoNguyenTo(int a[], int n) {
	for(int i=0;i<n;i++){
		if (soNguyenTo(a[i])) {
			cout << a[i] << endl;
		}
	}
}
int main() {
	int a[1000], n;
	cout << "Nhap n: " << endl;
	cin >> n;
	nhapMang(a, n);
	xuatMang(a, n);
	int demSNT = demSoNguyenTo(a, n);
	if (demSNT > 0) {
		cout << "Cac so nguyen to trong mang la: " << endl;
		lietKeSoNguyenTo(a, n);
	}
	return 0;
}