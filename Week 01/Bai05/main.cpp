#include <iostream>
#include <iomanip>
#include "Ham5.h"
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	if (a == 1) {
		return b;
	}
	else if (a == b) {
		return 1;
	}
	else {
		cout << tinhToHop(a, b) << endl;
	}
	return 0;
}