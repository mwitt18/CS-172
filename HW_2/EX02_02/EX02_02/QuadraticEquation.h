#ifndef QUADRATICEQUATION_H
#define QUADRATICEQUATION_H

class QuadraticEquation
{
private:
	//Define all the double variables
	double a;
	double b;
	double c;
	double discriminant;
	double r1;
	double r2;

public:
	QuadraticEquation() {
		//Initialize variables
		a = 0;
		b = 0;
		c = 0;
	}

	//Sets the variables that the users entered as a, b, c
	void seta(double a1) {
		a = a1;
	}

	void setb(double b1) {
		b = b1;
	}

	void setc(double c1) {
		c = c1;
	}

	//This will return the discriminant that will later be used in the root equations
	double getdiscrim(double a, double b, double c) {
		discriminant = pow(b, 2) - 4 * a*c; //Equation of the discriminant
		return discriminant;
	}

	//Quadratic equation (with the plus sign)
	double getRoot1(double a, double b, double c) {
		r1 = (-b + pow(discriminant, 0.5)) / (2 * a);
		return r1;
	}

	//Quadratic equation (with the minus sign)
	double getRoot2(double a, double b, double c) {
		r2 = (-b - pow(discriminant, 0.5)) / (2 * a);
		return r2;
	}
};

#endif