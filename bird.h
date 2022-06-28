#pragma once
#ifndef BIRD_H
#define Bird_H
#include "flyingObject.h"
#include "uiDraw.h"
#include <iostream>
using namespace std;


class Bird : public FlyingObject
{
private:
	int life;

public:
	Bird()
	{
		point.setY(100);
		point.setX(-200);
		life = 1;
		alive = true;
	}
	Point getPoint() { return point; }
	bool isAlive();
	void draw()
	{
		drawCircle(point, 15);
	}

	void advance();
	void kill() { alive = false; }
	int hit();
};

#endif