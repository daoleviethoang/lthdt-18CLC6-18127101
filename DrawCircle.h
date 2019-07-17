#pragma once
#include "DrawShape.h"
class DrawCircle:public DrawShape
{
public:
	void draw(Shape *S)
	{
		cout << "Draw Circle" << endl;
	}
};