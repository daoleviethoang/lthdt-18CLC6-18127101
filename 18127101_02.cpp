#include "Circle.h"
#include "Rectangle.h"
#include "DrawFillerCircle.h"
#include "DrawThickCircle.h"
#include "DrawRect.h"
void main()
{
	Circle c(1, 2, 3);
	c.setDrawer(new DrawThickCircle);
	c.draw();
	c.setDrawer(new DrawFilledCircle);
	c.draw();
	Rectangle R(2, 3);
	R.setDrawer(new DrawRect);
	R.draw();
	_getch();
}