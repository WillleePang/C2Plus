#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

int main(){
    int score = 80
    string sign = (score>90)?"high pass":(score>75)?"pass":(score>60)?"low pass":"fail";

    if(score>90){
        sign = "high pass";
    }else if(score>75){
        sign = "pass";
    }else if(score>60){
        sign = "low pass";
    }else{
        sign = "fail";
    }

    return 0;
}