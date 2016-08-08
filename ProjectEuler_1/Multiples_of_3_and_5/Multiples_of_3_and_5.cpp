// Multiples_of_3_and_5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n(0);
	cin >> n;
	int *iArray = new int[n];
	int arr_size = sizeof(iArray) / sizeof(*iArray);
	int iSum(0);
	for (int i(0); i < arr_size; i++)
	{
		cin >> iArray[i];
	}
	for (int i(0); i < arr_size; i++)
	{
		int iNum(iArray[i]);
		for (int i = 1; i < iNum; i++)
		{
			if ((i % 3 == 0) || (i % 5 == 0))
			{
				iSum = iSum + i;
			}
		}
		cout << iSum << endl;
	}
	return 0;
}

