#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
using namespace std;

int timY(int n);
int timY(int n);

int timX(int n){
	if (n == 0) {
		return 0;
	}
	return (timX(n - 1) + timY(n - 1));
}
int timY(int n) {
	if (n == 0) {
		return 1;
	}
	return (3 * timX(n - 1) + 2 * timY(n - 1));
}
int main() {
	int n;	
	cin >> n;
	int a = timX(n);
	int b = timY(n);
	cout << "So hang thu" << n << "cua day la: " << a << endl;
	cout << b;
	return 0;
}