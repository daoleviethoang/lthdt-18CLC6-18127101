#pragma once
class Shape;
#include<conio.h>
#include<iostream>
using namespace std;
class DrawShape
{
public:
	virtual void draw(Shape *S) = 0;
};
