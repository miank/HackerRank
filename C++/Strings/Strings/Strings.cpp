// Strings.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <utility>
using namespace std;

int main()
{
	string str1(""), str2(""), str3("");
	int a(0), b(0);
	cin >> str1;
	cin >> str2;
	a = str1.size();
	b = str2.size();
	cout << a << " " << b << endl;
	str3 = str1 + str2;
	cout << str3 << endl;
	swap(str1.front(), str2.front());
	cout << str1 << " " << str2 << endl;
    return 0;
}

