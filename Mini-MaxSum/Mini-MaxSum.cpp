// Mini-MaxSum.cpp 

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void miniMaxSum(vector<int> arr) {

	sort(arr.begin(), arr.end());

	long min = 0, max = 0;

	for (int i = 0; i < arr.size() - 1; i++)
	{
		min += arr[i];
	}
	for (int i = 1; i < arr.size(); i++)
	{
		max += arr[i];
	}
	cout << min << " " << max << endl;
}

int main()
{
	int n(0), ele(0);
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		cin >> ele;
		v.push_back(ele);
	}
	miniMaxSum(v);
}
