#include "stdafx.h"
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;

int main(int argc,int **argv){
    std::string str;
    for (int i = 1; i != argc; ++i)
        str += std::string(argv[i]) + " ";

    std::cout << str << std::endl;
    return 0;
}