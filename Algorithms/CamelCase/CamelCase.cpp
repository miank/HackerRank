// CamelCase.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cin >> str;
	int word_count = 1;

	for (int i = 0; i < str.length(); i++)
	{
		if (isupper(str[i]))
		{
			word_count++;
		}
	}
	cout << word_count << endl;
    
}

