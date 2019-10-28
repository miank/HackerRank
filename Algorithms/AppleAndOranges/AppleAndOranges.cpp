// AppleAndOranges.cpp 

#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int start = 0, end = 0;
	int apple_loc = 0, orange_loc = 0;
	int m = 0, n = 0;
	vector<int> v_apple;
	vector<int> v_orange;

	cin >> start >> end;
	cin >> apple_loc >> orange_loc;
	cin >> m >> n;

	int ele_1(0);
	for (int i = 0; i < m; i++)
	{
		cin >> ele_1;
		v_apple.push_back(ele_1);
	}

	int ele_2(0);
	for (int i = 0; i < n; i++)
	{
		cin >> ele_2;
		v_orange.push_back(ele_2);
	}
	
	int cnt_apple = 0;
	int cnt_orange = 0;

	for (int i = 0; i < m; i++)
	{
		if (v_apple[i] + apple_loc >= start && v_apple[i] + apple_loc <= end)
		{
			cnt_apple++;
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (v_orange[i] + orange_loc >= start && v_orange[i] + orange_loc <= end)
		{
			cnt_orange++;
		}
	}

	cout << cnt_apple << endl;
	cout << cnt_orange << endl;
}

