#pragma once
#ifndef BULLET_H
#define BULLET_H
#include "flyingObject.h"
#include "uiDraw.h"

class Bullet : public FlyingObject
{
private:
	float angle;
	

public:
	Bullet()
	{
		point.setY(-200);
		point.setX(200);
		angle = 0;
		alive = true;
	}
	bool isAlive();
	void kill();
	Point getPoint() { return point; }
	void draw();
	void advance();
	void fire(Point point, float angle);

};

#endif
