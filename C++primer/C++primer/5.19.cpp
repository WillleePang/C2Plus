#include "stdafx.h"
#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl; using std::string; using std::vector;

int main(){
    string rsp;
    do{
        cout<<"put tow strings:";
        string a, b;
        cin>>a>>b;
        cout<<(a<=b?a:b)<< " is less than the other. " << "\n\n"<< "More? Enter yes or no: ";
        cin >> rsp;
    }while(!rsp.empty()&&tolower(rsp[0])=='y')
    return 0;
}