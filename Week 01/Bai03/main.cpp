#include <iostream>
#include <iomanip>
#include "Ham3.h"
using namespace std;
int Fibo(int n){
	if (n == 0 || n == 1) {
		return 1;
	}
	else {
		return Fibo(n - 1) + Fibo(n - 2);
	}
}