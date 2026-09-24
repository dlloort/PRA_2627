#ifndef ROBOTICARM_H
#define ROBOTICARM_H

class RoboticArm {
	private:
		double x;
		double y;
		double z;
		bool holdingObject;

	public:
		RoboticArm();

		double getX() const;
		double getY() const;
		double getZ() const;
		bool isHoldingObject() const;

		void grab();
		void release();
		void move(double newX, double newY, double newZ);
};

#endif
