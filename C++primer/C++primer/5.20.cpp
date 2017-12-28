#include "stdafx.h"
#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl; using std::string; using std::vector;

int main(){
    string prestr;
    string str;
    while(cin>>str){
        if(prestr==str){
            break;
        }else{
            prestr = str;
        }
    }
    if (cin.eof()){
        cout << "no word was repeated." << endl;
    }else{
        cout << read << " occurs twice in succession." << endl;
    }
    return 0;
}