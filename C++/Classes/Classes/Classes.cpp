// Classes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>
#include <iostream>
#include <sstream>
#include <istream>
using namespace std;

class Student
{
	int iAge;
	string sFirst_name;
	string sLast_name;
	int iStandard;
public:
	void set_age(int age)
	{
		iAge = age;
	}
	int get_age()
	{
		return iAge;
	}
	string get_first_name()
	{
		return sFirst_name;
	}
	void set_first_name(string first_name)
	{
		sFirst_name = first_name;
	}
	string get_last_name()
	{
		return sLast_name;
	}
	void set_last_name(string last_name)
	{
		sLast_name = last_name;
	}
	int get_standard()
	{
		return iStandard;
	}
	void set_standard(int standard)
	{
		iStandard = standard;
	}

	string to_string() {
		stringstream ss;

		ss << iAge << ',';
		ss << sFirst_name << ',';
		ss << sLast_name << ',';
		ss << iStandard;

		return ss.str();
	}
};

int main() {
	int age, standard;
	string first_name, last_name;

	cin >> age >> first_name >> last_name >> standard;

	Student st;
	st.set_age(age);
	st.set_standard(standard);
	st.set_first_name(first_name);
	st.set_last_name(last_name);

	cout << st.get_age() << "\n";
	cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
	cout << st.get_standard() << "\n";
	cout << "\n";
	cout << st.to_string() << endl;

	return 0;
}


