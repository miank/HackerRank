// Inheritance.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
using namespace std;

class Triangle {
public:
	void triangle() {
		cout << "I am a triangle\n";
	}
};
class Isosceles : public Triangle {
public:
	void isosceles() {
		cout << "I am an isosceles triangle\n";
	}
	void description() {
		cout << "In an isosceles triangle two sides are equal" << endl;
	}
	//Write your code here.
	void triangle() {
		cout << "I am a triangle\n";
	}
};
int main() {
	Isosceles isc;
	isc.isosceles();
	isc.description();
	isc.triangle();
	return 0;
}


