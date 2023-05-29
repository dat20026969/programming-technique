#include <iostream>
#include <iomanip>
#include <cmath>
#include "Ham4.h"
using namespace std;
float TinhX(int n){
	if (n == 0) {
		return 1;
	}
	else {
		return TinhX(n - 1) - TinhY(n - 1);
	}
}
float TinhY(int n) {
	if (n == 0) {
		return 1; 
	}
	else {
		return 3 * TinhX(n - 1) - 2 * TinhY(n - 1);
	}
}