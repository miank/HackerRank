// CamelCase.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	string str("");
	cin >> str;
	int cnt(1);
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] >= 65 && str[i] <= 90) {
			cnt++;
		}
	}
	cout << cnt << endl;
    return 0;
}

