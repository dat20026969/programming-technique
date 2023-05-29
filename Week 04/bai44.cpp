#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    char s1[] = "smilehihi"; 
    char* s2 = strstr(s1, "hi"); 
    s2[1] = 'a'; 
    s1[8] = 'a'; 
    cout<<s1<<endl; 
    cout<<s2<<endl;
    return 0;
}
//smilehaha & haha
//s1 la do thay tung chu i.
/* s2 la vua bo smile, vua thay hihi thanh haha */
