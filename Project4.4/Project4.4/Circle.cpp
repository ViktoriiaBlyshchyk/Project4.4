#include "Circle.h"

istream& operator >> (istream& in, Circle& c)
{
	double a;
	cout << endl;
	cout << "r = "; in >> a;

	c.SetA(a);
	return in;
}

void Circle::Show()
{
	cout << "Area of Circle: " << Area() << endl;
	cout << "Perimeter of Circle: " << Perimeter() << endl;
}

double Circle::Area()
{
	return pi * pow(GetA(), 2);
}

double Circle::Perimeter()
{
	return 2 * pi * GetA();
}