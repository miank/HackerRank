// MiniMaxSum.cpp 

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	long int n(0), num(0), sum1(0), sum2(0);
	vector<int> vI;

	for (int i = 0; i < 5; i++)
	{
		cin >> num;
		vI.push_back(num);
	}

	sort(vI.begin(), vI.end());

	for (int i = 0; i < 5 - 1; i++)
	{
		sum1 = sum1 + vI[i];
	}

	for (int i = 1; i < 5; i++)
	{
		sum2 = sum2 + vI[i];
	}

	cout << sum1 << " " << sum2 << endl;

    return 0;
}

