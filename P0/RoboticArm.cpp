#include "RoboticArm.h"

RoboticArm::RoboticArm()
	: x(0.0), y(0.0), z(0.0), holdingObject(false)
{
}

double RoboticArm::getX()const
{
	return x;
}

double RoboticArm::getY()const
{
	return y;
}

double RoboticArm::getZ()const
{
	return z;
}

bool RoboticArm::isHoldingObject() const
{
	return holdingObject;
}

void RoboticArm::grab()
{
	holdingObject = true;
}

void RoboticArm::release()
{
	holdingObject = false;
}

void RoboticArm::move(double newX, double newY, double newZ)
{
	x = newX;
	y = newY;
	z = newZ;
}
