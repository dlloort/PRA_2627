#include <iostream>
#include "RoboticArm.h"

int main()
{
	RoboticArm robot;

	std::cout << "Posicion inicial:  ("
	<< robot.getX() << ", "
	<< robot.getY() << ", "
	<< robot.getZ() << ")\n";

	std::cout << "Sujetando objeto: "
	<< (robot.isHoldingObject() ? "si" : "no")
	<< "\n";

robot.move(10.0, 20.0, 30.0);

std::cout << "Nueva posicion: ("
	<< robot.getX() << ", "
	<< robot.getY() << ", "
	<< robot.getZ() << ")\n";

robot.grab();

std::cout << "Sujetando objeto: "
     << (robot.isHoldingObject() ? "si" : "no")
     << "\n";

robot.release();

std::cout << "Sujetando objeto despues de release: "
     << (robot.isHoldingObject() ? "si" : "no")
     << "\n";

return 0;

}
