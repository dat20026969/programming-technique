#include <iostream>
#include <fstream>
#include <cstring>
#include <map>
#include <set>
#include <sstream>
#include <iomanip>
#include <vector>

using namespace std;
int soNguyenTo(int n){
	if (n < 2){
		return 0;
    }
	for (int i = 2; i <= sqrt(n); i++){
		if (n % i == 0)	{
			return 0;
		}
	}
	return 1;
}
void primeNumber(){
	int n;
    int dem=0;
	vector<int>p;
	vector<int>::iterator q;
	cout << "Nhap so n bat ky:"<<endl;
	cin >> n;
	for (int i = 2; i <= 18; i++){
		p.push_back(i);
	}
	for (q=p.begin();q!=p.end();q++){
		if (soNguyenTo(*q))
		{
			cout << *q << " ";
		}
		
	}
}
int main(){
    int a;
    cin>>a;
    primeNumber();
    return 0;

}