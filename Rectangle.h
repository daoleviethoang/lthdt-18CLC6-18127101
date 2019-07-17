#pragma once
#include"Shape.h"
class Rectangle:public Shape
{
private:
	double a, b;
public: 
	Rectangle(double a, double b)
	{
		this->a = a;
		this->b = b;
	}
	void draw()
	{
		cout << "Rectangle length " << a << " width " << b << ": ";
		drawer->draw(this);
	}
};