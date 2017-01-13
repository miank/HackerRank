// Box.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Box
{
private:
	int l = 0, b = 0, h = 0;
public:
	Box(): l(0), b(0), h(0) { }
	Box(int length, int breadth, int height) : l(length), b(breadth), h(height) { }
	Box(const Box &obj)
	{
		l = obj.l;
		b = obj.b;
		h = obj.h;
	}
	int getLength() const
	{
		return l;
	}
	int getBreath() const
	{
		return b;
	}
	int getHeight() const
	{
		return h;
	}
	bool operator<(const Box &obj)
	{
		if (l < obj.l || (b < obj.b && l == obj.l) || (h < obj.h && b == obj.b && l == obj.l))
			return true;
		else
			return false;
	}
	long long CalculateVolume()
	{
		return (long long)l * b * h;
	}
};

namespace std {
	ostream& operator<<(ostream& out, Box _b) {
		return out << _b.getLength() << ' ' << _b.getBreath() << ' ' << _b.getHeight();
	}
}


int main()
{
    return 0;
}

