#include "stdafx.h"
#include<iostream>
#include<vector>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(){
    int arr[10];
    for(auto i = 0;i<10;++i){
        arr[i] = i;
    }
    for (auto i : arr) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}