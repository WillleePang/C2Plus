#include "stdafx.h"
#include<iostream>
#include<vector>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
	int i;
	vector<int> is;
	while (cin >> i) {
		is.push_back(i);
	}

	for (decltype(is.size()) a = 0, b = is.size() - 1;a <= b;a++, b--) {
		if (a == b) cout << is[a] << " sum is " << is[a] + is[b] << endl;
		cout << is[a] << " and " << is[b] << " sum is " << is[a] + is[b] << endl;
	}

	return 0;
}