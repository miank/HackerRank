// DivisibleSumPairs.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n(0), cnt(0);
	int value(0);
	cin >> n;
	cin >> value;
	int *arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if ((arr[i] + arr[j]) % value == 0)
			{
				cnt++;
			}
		}
	}
	cout << cnt << endl;
    return 0;
}

