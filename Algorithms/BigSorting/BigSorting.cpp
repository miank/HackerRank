// BigSorting.cpp 

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>
using namespace std;

// This function will sort based on integer length
bool myfunction(string i, string j)
{
	int n = i.length();
	int m = j.length();
	if (n == m)
		return (i<j);

	return n<m;
}

int main()
{
	int n(0);
	cin >> n;
	vector<string> v(n);
	
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	sort(v.begin(), v.end(), myfunction);
	cout.precision(40);
	for (int i = 0; i < n; i++)
	{
		std::cout << std::setprecision(40) << v[i] << endl;
	}
    return 0;
}

