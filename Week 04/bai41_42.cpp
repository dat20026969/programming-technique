#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    int a[]={2, 6, 5, 1, 3};
    int *p;
    p=a;
    cout<<*p<<endl;
    cout<<*p+2<<endl;
    cout<<*(p+2)<<endl;
    cout<<&p<<endl;
    cout<<&p+1<<endl;
    cout<<p<<endl;
    cout<<a<<endl;
    cout<<&a[0]<<endl;
    cout<<&a[0]+3<<endl;
    cout<<a+3<<endl;
    cout<<p+(*(p+4)-3)<<endl;
    return 0;
}