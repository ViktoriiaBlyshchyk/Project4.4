#pragma once
#include <iostream>

using namespace std;

class Figure
{
	double a;

public:
	double GetA() { return a; }
	void SetA(double x) { a = x; }

	virtual void Show() = 0;
	virtual double Area() = 0;
	virtual double Perimeter() = 0;
};