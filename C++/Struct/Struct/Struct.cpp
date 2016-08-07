// Struct.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

/*
add code for struct here.
*/
struct Student
{
	int age;
	string first_name;
	string last_name;
	int standard;
};
int main() {
	Student st;

	cin >> st.age >> st.first_name >> st.last_name >> st.standard;
	cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;

	return 0;
}

