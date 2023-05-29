#include <iostream>
#include <cmath>
#include <iomanip>
#include "Ham2.h"
using namespace std;
int totalSolution1(int n) {
	if (n == 0) {
		return 0;
	}
	else {
		return (totalSolution1(n - 1) + n);
	}
}
float totalSolution12(float x, int n){
	if (n == 1) {
		return x;
	}
	else {
		return pow(x, n) + totalSolution12(x, n - 1);
	}
}
float totalSolution13(float x, int n){
	if (n == 1) {
		return x * x;
	}
	else {
		return pow(x, 2 * n) + totalSolution13(x, n - 1);
	}
}
float totalSolution14(float x, int n) {
	if (n == 1) {
		return x * x;
	}
	else {
		return pow(x, 2 * n + 1) + totalSolution13(x, 2*n - 1);
	}
}
float totalSolution15(float x, int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return 1.0 / totalSolution1(n) + totalSolution15(n - 1);
	}
}


