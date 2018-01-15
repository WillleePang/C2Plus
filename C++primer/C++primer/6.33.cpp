#include "stdafx.h"
#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector; 
using Iter = vector<int>::const_iterator;

void print(Iter first, Iter last){
    if(first!=last){
        cout<<*first<<endl;
    }
    print(++first,last);
}

int main(){
    vector<int> vec{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    print(vec.cbegin(), vec.cend());

    string (&func(string (&arrStr)[10]))[10];

    using ArrT = string[10];
    ArrT& func1(ArrT& arr);

    auto func2(ArrT& arr) -> string(&)[10];

    string arrS[10];
    decltype(arrS)& func3(ArrT& arr);

    return 0;
}