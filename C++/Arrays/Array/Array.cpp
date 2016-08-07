// Array.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> myArray(n);
	for (int iIndex(0); iIndex < n; iIndex++) {
		cin >> myArray[iIndex];
	}
	for (int iIndex(n-1); iIndex >= 0; iIndex--) {
		cout << myArray[iIndex] << "";
	}
    return 0;
}

