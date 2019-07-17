#pragma once
#include "DrawCircle.h"
class DrawFilledCircle:public DrawCircle
{
public:
	void draw(Shape *S)
	{
		cout << "Draw Filled Circle" << endl;
	}
};