#pragma once
#include "Figure.h"

class Rectangle :
    public Figure
{
	double b;
public:
	double GetB() { return b; }
	void SetB(double y) { b = y; }

	friend istream& operator >> (istream& in, Rectangle& r);
	virtual void Show();

	virtual double Area();
	virtual double Perimeter();
};