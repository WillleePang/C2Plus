#include "stdafx.h"
#include <iostream>
#include <vector>
#include <iterator>

using std::cout; 
using std::endl; 
using std::vector;
using std::begin;
using std::end;

int main(){
    vector<int> vec{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int arr[vec.size()];
    
    for(auto i = 0;i<vec.size;++i){
        arr[i] = vec[i];
    }
    
    for (auto i : arr) cout << i << " ";
    cout << endl;

    return 0;
}