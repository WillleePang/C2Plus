#include "stdafx.h"
#include <iostream>
#include <vector>
#include <iterator>

using std::begin; 
using std::end; 
using std::cout; 
using std::endl; 
using std::vector;

int main(){
    bool compare(int* const pb1, int* const pe1, int* const pb2, int* const pe2){
        if ((pe1 - pb1) != (pe2 - pb2)) // have different size.
            return false;
        else{
            for (int* i = pb1, *j = pb2; (i != pe1) && (j != pe2); ++i, ++j){
                if (*i != *j) return false;
            }
        }
        return true;
    }
}