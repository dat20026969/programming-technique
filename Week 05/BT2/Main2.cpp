#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
using namespace std;

void nhapMang(int a[], int& n) {
	for (int i = 0; i <= n; i++) {
		cin >> a[i];
	}
}
void xuatMang(int a[], int n) {
	for (int i = 0; i <= n; i++) {
		cout << a[i] << endl;
	}
}
void tich3So(int a[], int n) {

}



int main() {
	int a, b[1000];
	cout << "nhap a: " << endl;
	cin >> a;
	nhapMang(b, a);
	xuatMang(b, a);
}