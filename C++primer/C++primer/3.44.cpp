#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

int main() {
	int arr[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};

	for (auto& p : arr) {
		for (int q : p) {
			cout << q << " ";
		}
		cout << endl;
	}

	using int_array = int[4];
	for (int_array &p:arr) {
		for (int q : p) {
			cout << q << " ";
		}
		cout << endl;
	}

	for (size_t i = 0;i != 3;++i) {
		for (size_t j = 0;j != 4;++j) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	for (int_array *p= arr;p != arr + 3;++p) {
		for (int *col = *p;col != *p + 4;++col) {
			cout << *col << " ";
		}
		cout << endl;
	}

	return 0;
}