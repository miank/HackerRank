// LonelyInteger.cpp 

#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int miniMaxSum(vector<int> v) {
	
	map<int, int> m1;
	int uniqueEle = 0;

	for (int i = 0; i < v.size(); i++)
	{
		m1[v[i]]++;
	}

	for (auto x : m1)
	{
		if (x.second == 1) {
			uniqueEle = x.first;
		}
	}
	return uniqueEle;
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
	cout << miniMaxSum(v);
}
