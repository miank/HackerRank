// BirthdayCakeCandles.cpp 

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	/*int n(0), size(0), count(0);
	vector<int> v;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> size;
		v.push_back(size);
	}

	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());

	for (int i = 0; i < n; i++)
	{
		if (v[i] != v[i + 1])
		{
			cout << 1 << endl;
			break;
		}
		else
		{
			count++;
		}
	}
	cout << count << endl;*/

	// Working solution
	int c, n, max = 0;
	std::cin.ignore();
	while (std::cin >> n)
		max < n ? c = !!(max = n) : c += max == n;
	std::cout << c;

    return 0;
}

