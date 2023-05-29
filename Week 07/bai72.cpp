#include <iostream>
#include <fstream>
#include <cstring>
#include <map>
#include <set>
#include <sstream>
#include <iomanip>
#include <vector>
using namespace std;
int main(){
	int m, n;
	cout<<"Nhap lan luot 2 so: "<<endl;
    cin>>m>>n;
auto multiplication =[](int m, int n){
		return m*n;
	};
int multi = multiplication(m, n);
	cout<<"Tich cua hai so do la: " << multi <<endl;
}