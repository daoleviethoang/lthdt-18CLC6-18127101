#pragma once
#include "Shape.h"
class Circle:public Shape
{
private:
	int x, y;
	double r;
public:
	Circle()
	{
		x = 0;
		y = 0;
		r = 0;
	}
	Circle(int x, int y, double r)
	{
		this->x = x;	
		this->y = y;
		this->r = r;
	}
	void draw()
	{
		cout << "Circle center " << x << "," << y << " radius " << r << ": ";
		drawer->draw(this);
	}
};
