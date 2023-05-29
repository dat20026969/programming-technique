#include <iostream>
#include <fstream>
#include <cstring>
#include <map>
#include <set>
#include <sstream>
#include <iomanip>
#include <vector>
void inTuDacBiet(char filename[]){    
    fstream fs(filename);    
    map<string, int> mp;    
    string s;
    while (fs >>s){        
        if (!mp.count(s)){
            mp.insert(make_pair(s, 1));
        }
        else{
            mp[s]++;
        }    
    }
}  
    fs.close();    
    for (map<string, int> :: iterator p = mp.begin();p != mp.end(); p++){
        if (p->second == 1){
            cout << p->first << endl;
        }
    }
}
int main(){
    
    char filename[] = "test.txt";
    ofstream fs(filename, ios::trunc);
    fs << "??????"<<endl;
    fs.close();  
    inTuDacBiet(filename);
    return 0;
}