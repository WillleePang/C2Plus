#include "stdafx.h"
#include <iostream>


using std::cout; 
using std::endl; 

const char str1[] = "Hello";
const char str2[] = "World!";

int main(){
    constexpr size_t new_size = strlen(str1) + strlen(" ") + strlen(str2) +1;
    char str3[new_size];

    strcpy(str3,str1);
    strcpy(str3," ");
    strcpy(str3,str2);
    std::cout << cstr3 << std::endl;
}