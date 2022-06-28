/*************************************************
* Velocity class that takes care of the physics.
*************************************************/

#ifndef VELOCITY_H
#define VELOCITY_H
#include <iostream>

class Velocity
{
private:
	float dx;
	float dy;
public:
	Velocity()
	{
		dx = 0;
		dy = 0;
	}
	Velocity(float dx, float dy)
	{
		this->dx = dx;
		this->dy = dy;
	}
	float getDx() { return dx; }
	float getDy() { return dy; }
	
	void setDx(float dx) { this->dx = dx; }
	void setDy(float dy) { this->dy = dy; }
	
};


#endif