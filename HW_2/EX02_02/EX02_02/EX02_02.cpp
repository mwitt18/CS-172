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
	

	//Prompt user to enter values for a, b, c
	cout << "Enter value for a: ";
	cin >> a;

	cout << "Enter value for b: ";
	cin >> b;

	cout << "Enter value for c: ";
	cin >> c;

	QuadraticEquation quad(a, b, c); //New variable in the class "QuadraticEquation"

	//Sets the discriminant calculated in QuadraticEquation.h and stores it into "discriminant" 
	double discriminant = quad.getdiscrim();
	
	//If the discriminant is a negative number
	if (discriminant < 0) {
		cout << "The equation has no real roots." << endl;
	}

	//If the discriminant is positive, display two roots
	else if (discriminant > 0) {
		cout << "The roots are: " << quad.getRoot1() << " and " << quad.getRoot2() << endl;
	}

	//If the discriminant is 0, display its one root
	else {
		cout << "The root is: " << quad.getRoot1() << endl;
	}

	return 0;
}