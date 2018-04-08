// PlusMinus.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	double n(0), num(0), pInt(0), nInt(0), ze(0), cnt(0);
	cin >> n;
	for (double i = 0; i < n; i++)
	{
		cin >> num;
		if (num > 0)
			pInt++;
		else if (num < 0)
			nInt++;
		else if (num == 0)
				ze++;
	}
	cout.precision(6);
	cout << fixed << pInt / n << endl;
	cout << fixed << nInt / n << endl;
	cout << fixed << ze / n << endl;
    return 0;
}

