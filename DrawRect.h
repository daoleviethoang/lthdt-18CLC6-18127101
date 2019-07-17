#pragma once
#include "DrawShape.h"
class DrawRect:public DrawShape
{
public:
	void draw(Shape *S)
	{
		cout << "Draw Rectangle" << endl;
	}
};
