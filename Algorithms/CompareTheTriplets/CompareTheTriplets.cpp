// CompareTheTriplets.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int arr1[3], arr2[3], cnt1(0), cnt2(0), cnt3(0);
	cin >> arr1[0] >> arr1[1] >> arr1[2];
	cin >> arr2[0] >> arr2[1] >> arr2[2];

	for (int i = 0; i < 3; i++)
	{
		if (arr1[i] > arr2[i])
			cnt1++;
		else
			if (arr1[i] < arr2[i])
				cnt2++;
	}
	cout << cnt1 << " " << cnt2;

	return 0;
}

