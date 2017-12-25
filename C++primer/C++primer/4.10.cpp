#include "stdafx.h"
#include <iostream>

using std::vector;
using std::cout;
using std::endl;

int main(){

    vector<int> vec{1,2,3,4,5,6,7,8,9};
    for(auto i:vec){
        cout<<(i&0x1)?i*2:i<<endl;
    }
    cout<<endl;

    return 0;
}