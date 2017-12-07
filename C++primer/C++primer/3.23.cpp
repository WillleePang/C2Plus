#include "stdafx.h"
#include<iostream>
#include<vector>
#include<string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::isalpha;

int main(){
    vector<int> vec = {1,23,141,5423,12312,5135,23121,1254,676,777};
    for(auto it = vec.begin;it!=vec.end();++it){
        (*it) *= 2;
    }
    for(auto i : vec){
        cout<<i<<endl;
    }

    return 0;
}