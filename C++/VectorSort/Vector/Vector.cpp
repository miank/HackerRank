// Vector.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n1(0), input(0);
	cin >> n1;
	vector<int>::iterator it;
	vector<int> vec(n1);
	for (int i = 0; i < n1; i++)
	{
		cin >> vec[i];
	}
	sort(vec.begin(), vec.end());
	for (int i = 0; i < n1; i++)
	{
		cout << vec[i] << " ";
	}
    return 0;
}

