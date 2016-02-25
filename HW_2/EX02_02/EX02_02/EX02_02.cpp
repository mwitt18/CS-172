////////////////////////
//Project Name: EX02_02
//Name: Marika Witt
//Class: 172-1
//Date: 2/21/16
////////////////////////

#include <iostream>
#include "QuadraticEquation.h" //Calls functions from header
using namespace std;


int main()
{
	//Define variables
	double a, b, c;
	QuadraticEquation quad; //New variable in the class "QuadraticEquation"

	//Prompt user to enter values for a, b, c
	cout << "Enter value for a: ";
	cin >> a;
	quad.seta(a); //Sets the user's a in the system

	cout << "Enter value for b: ";
	cin >> b;
	quad.setb(b); //Sets the user's b in the system

	cout << "Enter value for c: ";
	cin >> c;
	quad.setc(c); //Sets the user's c in the system
	
	//Sets the discriminant calculated in QuadraticEquation.h and stores it into "discriminant" 
	double discriminant = quad.getdiscrim(a, b, c);
	
	//If the discriminant is a negative number
	if (discriminant < 0) {
		cout << "The equation has no real roots." << endl;
	}

	//If the discriminant is positive, display two roots
	else if (discriminant > 0) {
		cout << "The roots are: " << quad.getRoot1(a, b, c) << " and " << quad.getRoot2(a, b, c) << endl;
	}

	//If the discriminant is 0, display its one root
	else {
		cout << "The root is: " << quad.getRoot1(a, b, c) << endl;
	}

	return 0;
}