// DiagonalDifference.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n(0), diag1(0), diag2(0), diff(0);
	cin >> n;
	int arr[100][100];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i<n; i++)
		diag1 = diag1 + arr[i][i];
	for (int i = 0; i<n; i++)
		diag2 = diag2 + arr[i][n - 1 - i];
	diff = abs(diag1 - diag2);
	cout << diff << endl;
    return 0;
}

