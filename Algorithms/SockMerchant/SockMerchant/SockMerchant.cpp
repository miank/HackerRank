// SockMerchant.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int cnt(0), n(0), pair(0);
	cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) 
	{
		int num = arr[i];
		for (int j = i; j < n; j++)
		{

			if (num == arr[j + 1])
			{
				cnt++;
			}
		}		
		if (cnt % 2 != 0)
			pair++;
	}
	cout << pair << endl;
    return 0;
}

