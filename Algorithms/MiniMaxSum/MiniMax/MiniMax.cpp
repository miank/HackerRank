// MiniMax.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int a[5], max(0), min(0), sum(0);
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
		sum = sum + a[i];
	}
	for (int i = 0; i < 5; i++)
	{
		max = sum - a[i];
	}

    return 0;
}

