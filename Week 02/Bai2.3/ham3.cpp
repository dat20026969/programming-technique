#include <iostream>
#include <iomanip>
#include "ham3.h"
using namespace std;
int tamGiac(int n) {
	if (n == 0) {
		return 0;
	}	
	return n + tamGiac(n - 1);
}