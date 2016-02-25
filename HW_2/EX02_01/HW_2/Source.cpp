/////////////////////
//Program Name: HW 2
//Name: Marika Witt
//Class: 172-1
//Date: 2/18/16
/////////////////////

#include "Fan.h" //Calls functions from header file
#include <iostream>
using namespace std;

int main()
{
	//Name two variables Fan1 & Fan2
	Fan Fan1;
	Fan Fan2;

	//Initialize/set speed of first fan
	int speed1 = 3;
	Fan1.setspeed(speed1);

	//Initialize/set radius of first fan
	double radius1 = 10;
	Fan1.setradius(radius1);

	//Initialize/set first fan as "on"
	bool on1 = true;
	Fan1.seton(on1);

	//Initialize/set speed of second fan
	int speed2 = 2;
	Fan2.setspeed(speed2);
	
	//Initialize/set radius of second fan
	double radius2 = 5;
	Fan2.setradius(radius2);

	//Initialize/set second fan as not on
	bool on2 = false;
	Fan2.seton(on2);

	//Display fan 1's new properties
	cout << "Fan 1's new speed is: " << Fan1.getspeed() << endl;
	cout << "Fan 1's new radius is: " << Fan1.getradius() << endl;
	cout << "Fan 1 is now on (represented by a 1): " << Fan1.turnon() << endl;

	//Display fan2's new properties
	cout << "Fan 2's new speed is: " << Fan2.getspeed() << endl;
	cout << "Fan 2's new radius is: " << Fan2.getradius() << endl;
	cout << "Fan 2 is now off (represented by a 0): " << Fan2.turnon() << endl;
}