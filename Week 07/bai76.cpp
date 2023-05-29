#include <iostream>
#include <fstream>
#include <cstring>
#include <map>
#include <set>
#include <sstream>
#include <iomanip>
using namespace std;
int main(){
    map<string, set<int>> xuatHien;
    string s;
    ifstream filein("19541975.txt");
    ofstream fileout("mainitem.txt");
    int dem=0;
    while(filein.eof()==false){
        dem++;
        getline(filein, s);
        stringstream sub;
        sub<<s;
        while(sub>>s){
            xuatHien[s].insert(dem);
        }
        sub.clear();
    }
    for(auto e: xuatHien){
        fileout<<e.first<<" ";
        for(auto e2:e.second){
            fileout<<e2<<" ";
        }
        fileout<<endl;
    }
}