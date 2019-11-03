// StrongPassword.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int str_length(0);
	cin >> str_length;

	string str;
	cin >> str;

	int cnt = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str.length() > 6)
		{
			cnt++;
			if (str.find(isdigit(str[i])))
			{
				cnt++;
			}
			if (str.find(islower(str[i])))
			{
				cnt++;
			}
			if (str.find(isupper(str[i])))
			{
				cnt++;
			}
		}
	}

}

