#include <iostream>
#include <iomanip>
#include <cmath>
#include "bai1.h"
using namespace std;
int demTaiTho(int a) {
    
    if (a == 0){
        return 0;
    }
    else if (a > 0){
        if (a % 2 == 1){
            return 2 + demTaiTho(a - 1);
        }
         
    }
    return 3 + demTaiTho(a - 1);
}
