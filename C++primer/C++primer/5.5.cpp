#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>

int main(){
    using std::vector; 
    using std::string; 
    using std::cout; 
    using std::endl; 
    using std::cin;

    vector<string> scores = { "F", "D", "C", "B", "A", "A++" };
    for(int g:cin>>g){
        string letter;
        if(g<60){
            letter = scores[0];
        }else{
            letter = scores[(g-50)/10];
            if(g!=100){
                letter = g%10>7?"+":g%3<3?"-":""
            }
        }
        cout<<letter<<endl;
    }
}