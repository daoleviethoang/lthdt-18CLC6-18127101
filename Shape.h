#pragma once
#include "DrawShape.h"
class Shape
{
protected:
	DrawShape* drawer;
public:
	virtual void draw(Shape *S)
	{
	}
	void setDrawer(DrawShape *S)
	{
		this->drawer = S;
	}
};
