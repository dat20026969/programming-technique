#include <iostream>
#include <iomanip>
#include <cmath>
#include "Ham.h"
using namespace std;
int main() {
	int n;
	while (100 < 200) {
		cout << "1. tinh tong S = 1 + 2 + 3 + ... + n" << endl;
		cout << "2. tinh tong S = 1 ^ 2 + 2 ^ 2 + 3 ^ 2 + ... + n ^ 2" << endl;
		cout << "3. tinh tong S = 1 + 1/2 + 1/3 + ... + 1/n " << endl;
		cout << "4. tinh tong S = 1 +  1/2 + 1/4 + ... + 1/2n" << endl;
		cout << "5. tinh tong S = 1 + 1/3 + 1/5 +...+ 1/(2n+1)" << endl;
		cout << "6->11. Moi cac thay go de kiem tra bai toan" << endl;
		cout << "0. Ket thuc chuong trinh." << endl;
		int choose;
		cout << "Moi thay chon bai toan" << endl;
		cin >> choose;
		if (choose == 1) {
			cout << "Moi thay nhap so n" << endl;
			cin >> n;
			if (n < 0) {
				cout << "Moi Thay nhap lai." << endl;
			}
			else {
				cout << "Tong la: " << totalSolution1(n) << endl;
			}
		}
		else if (choose == 2) {
			cout << "Moi thay nhap so n" << endl;
			cin >> n;
			if (n < 0) {
				cout << "Moi Thay nhap lai." << endl;
			}
			else {
				cout << "Tong la: " << totalSolution2(n) << endl;
			}
		}
		else if (choose == 3) {
			cout << "Moi thay nhap so n" << endl;
			cin >> n;
			if (n < 0) {
				cout << "Moi Thay nhap lai." << endl;
			}
			else {
				cout << "Tong la: " << totalSolution3(n) << endl;
			}
		}
		else if (choose == 4) {
			cout << "Moi thay nhap so n" << endl;
			cin >> n;
			if (n <= 0) {
				cout << "Moi Thay nhap lai." << endl;
			}
			if(n==1){
				return 0.50;
			}
			if (n > 1) {
				cout << "Tong la: " << totalSolution4(n) << endl;
			}
		}
		else if (choose == 5) {
			cout << "Moi thay nhap so n" << endl;
			cin >> n;
			if (n < 0) {
				cout << "Moi Thay nhap lai." << endl;
			}
			if (n == 1) {
				return (float)4/3;
			}
			if (n > 1) {
				cout << "Tong la: " << totalSolution5(n) << endl;
			}
		}
		else if (choose == 6) {
			cout << "Moi thay nhap so n" << endl;
			cin >> n;
			if (n < 0) {
				cout << "Moi Thay nhap lai." << endl;
			}
			if (n == 1) {
				return 0.50;
			}
			if (n > 1) {
				cout << "Tong la: " << totalSolution4(n) << endl;
			}
		}
		else if (choose == 7) {
			cout << "Moi thay nhap so n" << endl;
			cin >> n;
			if (n < 0) {
				cout << "Moi Thay nhap lai." << endl;
			}
			if (n == 0) {
				return 0;
			}
			if (n == 1) {
				return 0.50;
			}
			if (n > 1) {
				cout << "Tong la: " << totalSolution7(n) << endl;
			}
		}
		else if (choose == 8) {
			cout << "Moi thay nhap so n" << endl;
			cin >> n;
			if (n < 0) {
				cout << "Moi Thay nhap lai." << endl;
			}
			if (n == 0) {
				return 0.50;
			}
			if (n > 0) {
				cout << "Tong la: " << totalSolution8(n) << endl;
			}
		}
		else if (choose == 9) {
			cout << "Moi thay nhap so n" << endl;
			cin >> n;
			if (n <= 0) {
				cout << "Moi Thay nhap lai." << endl;
			}
			if (n == 1) {
				return 1;
			}
			if (n > 0) {
				cout << "Tong la: " << multiplication9(n) << endl;
			}
		}
		else if (choose == 11) {
			cout << "Moi thay nhap so n" << endl;
			cin >> n;
			if (n <= 0) {
				cout << "Moi Thay nhap lai." << endl;
			}
			if (n == 1) {
				return 1;
			}
			if (n > 1) {
				cout << "Tong la: " << totalSolution11(n) << endl;
			}
		}
		else if (choose == 0) {
			break;
		}
		else {
			cout << "Thay nhap khong hop le, xin Thay nhap lai." << endl;
		}
	}
	cout << "Ket thuc chuong trinh, cam on cac Thay da su dung" << endl;
	return 0;
}