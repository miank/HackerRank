// Staircase.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n, sp, ch = 1, p;
	cin >> n;
	p = n - 1;
	for (int i = 0; i < n; i++) 
	{
		sp = p;
		for (int j = 0; j < sp; j++) 
		{ 
			cout << " "; 
		}
		for (int k = 0; k < ch; k++) 
		{ 
			cout << "#"; 
		}
		cout << endl;
		p--;
		ch++;
	}
    return 0;
}

