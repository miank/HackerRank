// IntroChallenge.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n(0), value(0);
	cin >> value;
	cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (value == arr[i])
		{
			cout << i << endl;
			break;
		}
	}
    return 0;
}

