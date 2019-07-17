#pragma once
#include "DrawCircle.h"
class DrawThickCircle:public DrawCircle
{
public:
	void draw(Shape *S)
	{
		cout << "Draw Thick Circle" << endl;
	}
};
