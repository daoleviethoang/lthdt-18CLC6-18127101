#include "Ball.h"
Ball *Ball::m_ball = nullptr;
Ball *Ball::GetBall()
{
	if (!m_ball)
		m_ball = new Ball;
	return m_ball;
}