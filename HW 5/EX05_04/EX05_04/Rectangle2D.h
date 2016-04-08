#ifndef RECTANGLE2D_H
#define RECTANGLE2D_H

class Rectangle2D
{
private: //Variables that cannot be modified by outside users
	double x;
	double y; 
	double width;
	double height;

public: //Functions within Rectangle2D class
	Rectangle2D();
	Rectangle2D(double, double, double, double);
	void setx(double);
	double getx();
	void sety(double);
	double gety();
	void setwidth(double);
	double getwidth();
	void setheight(double);
	double getheight();
	const double getArea();
	const double getPerimeter();
	const bool contains(double, double);
	const bool contains(const Rectangle2D &r);
	const bool overlaps(const Rectangle2D &r);
};

#endif