#include "stdafx.h"
#include <vector>
#include <iostream>

using std::vector; 
using std::cout; 
using std::cin; 
using std::endl;


int main(){
    vector<unsigned> scores(11,0);
    for(unsigned grade;cin>>grade;/**/){
        if(grade<=100){
            ++*(scores.begin()+grade/10);
        }
    }

    for(auto it: scores){
        cout<<it<<" ";
    }
    cout<<endl;
    
    reuturn 0;
}