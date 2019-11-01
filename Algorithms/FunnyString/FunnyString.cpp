// FunnyString.cpp 

#include "pch.h"
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int t(0);
	cin >> t;
	while (t--)
	{
		bool flag = true;
		string originial_str, reverse_str;
		cin >> originial_str;
		reverse_str = originial_str;
		reverse(reverse_str.begin(), reverse_str.end());

		for (int i = 0; i < originial_str.length() - 1; i++)
		{
			int value1 = int(originial_str[i]);
			int value2 = int(originial_str[i + 1]);
			int diff1 = abs(value1 - value2);
			int value3 = int(reverse_str[i]);
			int value4 = int(reverse_str[i + 1]);
			int diff2 = abs(value3 - value4);
			if (diff1 != diff2)
			{
				cout << "Not Funny" << endl;
				flag = false;
				break;
			}
		}
		if (flag)
		{
			cout << "Funny" << endl;
		}
	}
	return 0;
}

