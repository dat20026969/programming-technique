#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	array<double, 10> array;
	array<double, 10> ::std::iterator itr;
	vector<int> vec1{10, 20, 30, 40, 50};
    vector<int> vec2;
    for(size_t i=0;i<vec1.size(),++i){
        vec2.push_back(vec1[i]);
    }
    vector<int>::iterator itr1;
    for(itr1=vec2.begin();itr1<vec2.end(); ++itr1){
        cout<<*itr1<<endl;
    }
    cout<<"-----------------------";
    for(auto itr1=vec2.begin();itr1!=vec2.end(), ++itr1){
        cout<<*itr1<<endl;
    }
	return 0;
}