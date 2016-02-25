#ifndef FAN_H
#define FAN_H

class Fan
{
//Set variables as private 
private: 
	int speed;
	bool on;
	double radius;

public:
	//no-arg constructor
	Fan() { 
		//Initial properties
		speed = 1;
		on = false;
		radius = 5;
	}
	
	//This function will return the new speed
	int getspeed() {
		return speed;
	}

	//User will redefine this speed in .cpp
	void setspeed(int value) {
		speed = value;
	}

	//This function will return the new on value
	bool turnon() {
		return on;
	}

	//User will redefine this value in .cpp
	void seton(bool onvalue) {
		on = onvalue;
	}

	//This function will return the new radius
	double getradius() {
		return radius;
	}

	//User will redefine this radius in .cpp
	void setradius(double radvalue) {
		radius = radvalue;
	}
};

#endif