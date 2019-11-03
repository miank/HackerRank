// Sets-STL.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
	set<int> s;
	int n;
	cin >> n;
	int choice(0);
	int ele;
	while (n > 0)
	{
		cin >> choice;
		cin >> ele;
		switch (choice)
		{
		case 1: s.insert(ele);
			break;
		case 2: s.erase(ele);
			break;
		case 3:  cout << (s.find(ele) == s.end() ? "No" : "Yes") << endl;
			break;
		default: exit(0);
		}
		n--;
	}
}

