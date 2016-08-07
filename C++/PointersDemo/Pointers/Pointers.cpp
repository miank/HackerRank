// Pointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

void update(int *a, int *b) { 
	int temp = *a;
	*a = *a + *b;
	*b = temp - *b;

	if (*b < 0)
	{
		*b = -(*b);
	}
}

int main() {
	int a, b;
	int *pa = &a, *pb = &b;

	cin >> a >> b;
	update(pa, pb);
	cout << a << b;
	return 0;
}

