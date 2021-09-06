// TwoString.cpp 

#include <iostream>
#include <map>
#include <string>
using namespace std;

string twoStrings(string s1, string s2) {

	map <char, int> k;
	for (int y = 0; y < s1.length(); y++)
		k[s1[y]] = 1;
	int counter = 0;
	for (int y = 0; y < s2.length(); y++)
	{
		if (k[s2[y]])
		{
			counter = 1;
		}
	}
	if (counter)
		return "YES";
	else
		return "NO";
}

int main()
{
	string str1, str2;
	cin >> str1 >> str2;

	string result = twoStrings(str1, str2);
	cout << result << endl;

	return 0;
}

