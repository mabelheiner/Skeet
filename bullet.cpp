#include "bullet.h"
#include <cmath>
#include <iostream>
using namespace std;


bool Bullet::isAlive()
{
	return alive;
}

void Bullet::kill()
{
	alive = false;
}

void Bullet::draw()
{
	drawDot(point);
}

void Bullet::advance()
{
	point.addX(vel.getDx());
	point.addY(vel.getDy() );
	draw();
}

void Bullet::fire(Point p, float ang)
{ 
	vel.setDx(10 * (-cos(3.1415 / 180.0 * ang)));
	vel.setDy(10 * (sin(3.1415 / 180.0 * ang)));
	advance();
}
