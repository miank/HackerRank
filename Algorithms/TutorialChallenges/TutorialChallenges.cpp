// TutorialChallenges.cpp 

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n(0), ele(0), num(0);
	cin >> ele;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		v.push_back(num);
	}

	for (int i = 0; i < n; i++)
	{
		if (ele == v[i])
			cout << i << endl;
	}
    return 0;
}

