#pragma once
#include <conio.h>
#include<iostream>
using namespace std;
class Ball
{
private:
	static Ball* m_ball;
	Ball() = default;
	~Ball() = default;
public:
	static Ball *GetBall();
};