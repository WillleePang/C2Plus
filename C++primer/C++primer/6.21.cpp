#include "stdafx.h"
#include <iostream>
using std::cout; using std::endl; using std::string;

int larger(const int i, const int *const p){
    return (i>*p)?i:*p;
}

int main(){
    int i = 6;
    cout<<larger(7,&i)<<endl;
    return 0;
}