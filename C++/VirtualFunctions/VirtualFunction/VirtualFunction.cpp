// VirtualFunction.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

class Person
{
public:
	virtual void getdata() = 0;
	virtual void putdata() = 0;
protected:
	string name;
	unsigned int age;
};

class Professor : public Person
{
private:
	unsigned int publications;
	unsigned int id;
	static unsigned int curr_id;
public:
	Professor() :id{ curr_id } {}

	void putdata()
	{
		cout << name << " " << age << " " << publications << " " << id << endl;
	}
	void getdata()
	{
		cin >> name >> age >> publications;
	}
};

unsigned int Professor::curr_id{ 1u };

class Student : public Person 
{
private:
	vector<unsigned int> marks;
	unsigned int id;
	static unsigned int curr_id;
public:
	Student():marks(6), id {curr_id++} { }

	void getdata()
	{
		cin >> name >> age;
		for (auto& marks: marks)
		{
			cin >> marks;
		}
	}
	void putdata()
	{
		cout << name << " " << age << " " << accumulate(marks.cbegin(), marks.cend(), 0u) << endl;
	}
};
unsigned int Student::curr_id{ 1u };

int main()
{
	int n, val;
	cin >> n; //The number of objects that is going to be created.
	Person *per[n];

	for (int i = 0; i < n; i++) {

		cin >> val;
		if (val == 1) {
			// If val is 1 current object is of type Professor
			per[i] = new Professor;

		}
		else per[i] = new Student; // Else the current object is of type Student

		per[i]->getdata(); // Get the data from the user.

	}

	for (int i = 0; i<n; i++)
		per[i]->putdata(); // Print the required output for each object.

	return 0;
}

