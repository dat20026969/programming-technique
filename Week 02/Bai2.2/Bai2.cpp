#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <vector>
#include "Bai2.h"
using namespace std;
int demHi(char a) {
	if (a.length() <= 1) {
		return 0;
	}
	if (a.length() > 2 && a.substr(0, 3).compare("xhi")) {
		return demHi(a.substr(3));
	}
	if (a.substr(0, 2).compare("hi")) {
		return 1 + demHi(a.substr(2));
	}
	return demHi(a.substr(1));
}

	