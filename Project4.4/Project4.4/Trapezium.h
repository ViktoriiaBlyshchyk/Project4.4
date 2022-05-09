#pragma once
#include "Figure.h"
class Trapezium :
    public Figure
{
	double b, c, d, h;

public:
	double GetB() { return b; }
	double GetC() { return c; }
	double GetD() { return d; }
	double GetH() { return h; }
	void SetB(double f) { b = f; }
	void SetC(double x) { c = x; }
	void SetD(double y) { d = y; }
	void SetH(double z) { h = z; }

	friend istream& operator >> (istream& in, Trapezium& t);
	virtual void Show();
	
	virtual double Area();
	virtual double Perimeter();
};