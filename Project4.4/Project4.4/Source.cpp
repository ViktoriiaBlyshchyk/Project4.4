#include <iostream>
#include "Rectangle.h"
#include "Circle.h"
#include "Trapezium.h"

using namespace std;

int main()
{
	Rectangle a;
	cin >> a;

	Circle b;
	cin >> b;

	Trapezium c;
	cin >> c;
	cout << endl;

	Figure* arr[3] = { &a, &b, &c };
	for (int k = 0; k < 3; k++)
		arr[k]->Show();

	Figure* x = new Rectangle();
	Figure* y = new Circle();
	Figure* z = new Trapezium();

	cout << endl;
	cout << typeid(x).name() << endl;
	cout << typeid(*x).name() << endl;
	cout << typeid(y).name() << endl;
	cout << typeid(*y).name() << endl;
	cout << typeid(z).name() << endl;
	cout << typeid(*z).name() << endl << endl;

	return 0;
}
