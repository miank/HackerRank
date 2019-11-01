// TwoStrings.cpp

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t(0);
	cin >> t;
	
	while (t--)
	{
		string str1, str2;
		cin >> str1 >> str2;

		bool flag = true;

		for (int i = 0; i < str1.length(); i++)
		{
			char ch = str1[i];
			int found = str2.find(ch);
			if (found >= 0)
			{
				cout << "YES" << endl;
				flag = false;
				break;
			}
		}
		if (flag)
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}

