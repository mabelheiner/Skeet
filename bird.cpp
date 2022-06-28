#include "bird.h"


bool Bird::isAlive()
{
	return alive;

}


void Bird::advance()
{
	point.addX(5);
	draw();
}

int Bird::hit()
{
	life--;
	if (life == 0)
	{
		alive = false;
	}
	return 1;
}
