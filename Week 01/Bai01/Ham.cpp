#include <iostream>
#include <iomanip>
#include <cmath>
#include "Ham.h"
using namespace std;
int totalSolution1(int n) {
	if (n == 0) {
		return 0;
	}
	else {
		return (totalSolution1(n - 1) + n);
	}
}
int totalSolution2(int n) {
	if (n == 1)
		return 1 ;
	else {
		return n * n + totalSolution2(n - 1);
	}
}
float totalSolution3(int n) {
	if (n == 0) {
		return 0;
	}
	if (n == 1) {
		return 1;
	}
	if (n > 1) {
		return float(1 / n + totalSolution3(n - 1));
	}
}
float totalSolution4(int n) {
	if (n == 0) {
		return 0;
	}
	if (n == 1) {
		return 0.50;
	}
	else {
		return (float)1 / (2 * n) + totalSolution4(n - 1);
	}
}

float totalSolution5(int n) {
	if (n == 1) {
		return (float)4 / 3;
	}
	if (n == 0) {
		return 0;
	}
	if (n > 1) {
		return (float) 1 / (2 * n + 1) + totalSolution5(n - 1);
	}
}
float totalSolution6(int n) {
	if (n == 0) {
		return 0;
	}
	if (n == 1) {
		return (float)1 / 2;
	}
	if (n > 1) {
		return (float)1 / (n * (n + 1)) + totalSolution6(n - 1);
	}
}
float totalSolution7(int n) {
	if (n == 0) {
		return 0;
	}
	if (n == 1) {
		return 0.50;
	}
	if (n > 1) {
		return (float)(n / (n + 1)) + totalSolution7(n - 1);
	}
}
float totalSolution8(int n) {
	if (n == 0) {
		return 0.50;
	}
	if (n > 0) {
		return (float)((2 * n + 1) / (2 * n + 2)) + totalSolution8((2 * n - 1) / (2 * n));
	}
}
long multiplication9(int n) {
	if (n == 1) {
		return 1;
	}
	if (n > 1) {
		return (multiplication9(n - 1) * n);
	}
}
long totalSolution11(int n) {
	if (n == 1) {
		return 1;
	}
	if (n > 1) {
		return (multiplication9(n - 1) + multiplication9(n));
	}
}

