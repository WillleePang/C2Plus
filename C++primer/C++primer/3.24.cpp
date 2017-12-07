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
    vector<int> v;
    for (int buffer; cin >> buffer; v.push_back(buffer));

    if (v.size() < 2){
        cout << " please enter at least two integers";
        return -1;
    }

    for (auto it = v.cbegin(); it + 1 != v.cend(); ++it){
        cout<<*it+*(it+1)<<" ";
    }
    cout<<endl;

    for(auto left = v.cbegin(),right = v.end()-1;left<=right;++left,--right){
        cout<<*left+*right<<" ";
    }
    cout<<endl;

    return 0;
}