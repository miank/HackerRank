// Grading.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n(0), marks(0);
	cin >> n;
	int *arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < 38)
		{
			cout << arr[i] << endl;
		}
		else if ((arr[i] + 1) % 5 == 0)
		{
			marks = arr[i] + 1;
			cout << marks << endl;
		}
		else if ((arr[i] + 2) % 5 == 0)
		{
			marks = arr[i] + 2;
			cout << marks << endl;
		}
		else
		{
			cout << arr[i] << endl;
		}
	}
    return 0;
}

