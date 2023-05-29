#include <iostream>
#include <iomanip>
#include "Ham5.h"
using namespace std;
int tinhToHop(int k, int n){
	if (k == 1) {
		return n;
	}
	else if (n == k) {
		return 1;
	}
	else {
		return tinhToHop(n - 1, k) + tinhToHop(n - 1, k - 1);
	}
}