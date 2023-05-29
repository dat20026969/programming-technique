#include <iostream>
#include <fstream>
#include <cstring>
#include <map>
#include <set>
#include <sstream>
#include <iomanip>
#include <vector>
#include <array>
int main(){
    array<double, 10>number = { 10.1, 10.2, 10.3, 10.4, 10.5, 10.6, 10.7, 10.8, 10.9, 11 };
	array<double, 10>::iterator a;
	for (a = number.begin(); a != number.end(); a++){
		cout << *a << " ";
	}
}