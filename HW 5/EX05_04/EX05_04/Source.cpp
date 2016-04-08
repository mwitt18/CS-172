//////////////////////
//Program: EX05_04
//Name: Marika Witt
//Date: 4/4/16
//Class: 172-2
/////////////////////

#include <iostream>
#include "Rectangle2D.h"
using namespace std;

int main()
{
	Rectangle2D r1(2, 2, 5.5, 4.9);
	Rectangle2D r2(4, 5, 10.5, 3.2);
	Rectangle2D r3(3, 5, 2.3, 5.4);

	cout << "r1's area is: " << r1.getArea() << endl;
	cout << "r1's perimeter is: " << r1.getPerimeter() << endl;

	cout << "T/F r1 contains the point (3,3): " << r1.contains(3, 3) << endl;
	cout << "T/F r1 contains the rectangle r2: " << r1.contains(r2) << endl;
	cout << "T/F r1 overlaps r3: " << r1.overlaps(r3) << endl;
}

//No-argument constructor
Rectangle2D::Rectangle2D()
{
	x = 0;
	y = 0;
	width = 1;
	height = 1;
}

//Overloaded constructor
Rectangle2D::Rectangle2D(double x1, double y1, double width1, double height1)
{
	x = x1;
	y = y1;
	width = width1;
	height = height1;
}

//Setter funtion for x
void Rectangle2D::setx(double x1)
{
	x = x1;
}

//Getter function for x
double Rectangle2D::getx()
{
	return x;
}

//Setter funtion for y
void Rectangle2D::sety(double y1)
{
	y = y1;
}

//Getter function for y
double Rectangle2D::gety()
{
	return y;
}

//Setter funtion for width
void Rectangle2D::setwidth(double width1)
{
	width = width1;
}

//Getter function for width
double Rectangle2D::getwidth()
{
	return width;
}

//Setter funtion for height
void Rectangle2D::setheight(double height1)
{
	height = height1;
}

//Getter function for height
double Rectangle2D::getheight()
{
	return height;
}

//Getter function for area
const double Rectangle2D::getArea()
{
	return height*width;
}

//Getter function for perimeter
const double Rectangle2D::getPerimeter()
{
	return 2 * height + 2 * width;
}

//Function returns true if......
const bool Rectangle2D::contains(double a, double b)
{
	if (x - (width/2) > a || x + (width/2) < a || y + (height/2) < b || y - (height/2) > b)
		return false;
	else
		return true;
}

//Function returns true if......
const bool Rectangle2D::contains(const Rectangle2D &r)
{
	Rectangle2D innerRectangle = r;

	if ((y - (height / 2)) < (innerRectangle.gety() - (innerRectangle.getheight() / 2)) && (y + height / 2) > innerRectangle.gety() + (innerRectangle.getheight() / 2) && (x + width/2) > (innerRectangle.getx() + innerRectangle.getwidth()/2) && (x - width/2) < (innerRectangle.getx() - innerRectangle.getwidth()/2))
		return true;
	else
		return false;
}

//Function returns true if......
const bool Rectangle2D::overlaps(const Rectangle2D &r)
{
	Rectangle2D innerRectangle = r;
	if ((y - (height / 2)) > (innerRectangle.gety() - (innerRectangle.getheight() / 2)) || (y + height / 2) < innerRectangle.gety() + (innerRectangle.getheight() / 2))
		return true;
	else
		return false;
}
