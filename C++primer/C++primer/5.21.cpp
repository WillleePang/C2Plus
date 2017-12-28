#include "stdafx.h"
#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl; using std::string; using std::vector;

int main(){
    string prestr;
    string str;
    bool on_twice = true;
    while(cin>>str){
        if(isupper(str)&&prestr==str){
            cout << str << " occurs twice in succession." << endl;
            on_twice = false;
            break;
        }
        prestr = str;
    }
    if (on_twice){
        cout << "no word was repeated." << endl;
    }
    return 0;
}