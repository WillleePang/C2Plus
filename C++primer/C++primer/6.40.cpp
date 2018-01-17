#include "stdafx.h"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

string make_plural(size_t ctr, const string& word, const string& ending = "s"){
    return (ctr > 1) ? word + ending : word;
}

int main(){

    int func(int a, int b);
    using pFunc1 = decltype(func) *;
    using pFunc6 = decltype(func);
    using pFunc3 = int (*)(int a, int b);
    using pFunc4 = int(int a, int b);
    typedef decltype(func) *pFunc2;
    typedef int(*pFunc5)(int a, int b);

    int add(int a, int b) { return a + b; }
    int subtract(int a, int b) { return a - b; }
    int multiply(int a, int b) { return a * b; }
    int divide(int a, int b) { return b != 0 ? a / b : 0; }
    std::vector<decltype(func) *> vec{ add, subtract, multiply, divide };
    for (auto f : vec)
            std::cout << f(2, 2) << std::endl;

    cout << "singual: " << make_plural(1, "success", "es") << " "
         << make_plural(1, "failure") << endl;
    cout << "plural : " << make_plural(2, "success", "es") << " "
         << make_plural(2, "failure") << endl;
    return 0;
}