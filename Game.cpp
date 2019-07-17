#include "Game.h"
void Game::createBall()
{
	firstBall = Ball::GetBall();
	cout << "Address of Ball: " << &*firstBall << endl;
	secondBall = Ball::GetBall();
	cout << "Address of Ball: " << &*secondBall << endl;
}