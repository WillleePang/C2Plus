#include "stdafx.h"
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;

void swap(int *& left,int *& right ){
    auto tmp = left;
    left = right;
    right = tmp;
}

int main(){
    int i = 42,j =99;
    auto left  = &i;
    auto right = &j;
    swap(left,right);
    cout<<*left<<*right<<endl;
}
