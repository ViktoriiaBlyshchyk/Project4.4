#pragma once
#include "Figure.h"

class Circle :
    public Figure
{
	double pi = 3.14;

public:
	friend istream& operator >> (istream& in, Circle& c);
	virtual void Show();
	
	virtual double Area();
	virtual double Perimeter();
};

