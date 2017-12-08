#include "stdafx.h"
#include <vector>
#include <iostream>

using std::vector; 
using std::cout; 
using std::cin; 
using std::endl;


int main(){
    const int size = 10;
    int arr[size];
    for(auto ptr = arr;ptr!=ptr+size;++ptr){
        *ptr = 0;
    }
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}