#include <iostream>
#include <cmath>
#include "RegularPolygon.h"
using namespace std;

//No-arg constructor
RegularPolygon::RegularPolygon()
{
	n = 3;
	side = 1;
	x = 0;
	y = 0;
}

//Constructor with two items
RegularPolygon::RegularPolygon(int n1, double side1)
{
	n = n1;
	side = side1;
	x = 0;
	y = 0;
}

//Constructor with four items
RegularPolygon::RegularPolygon(int n1, double side1, double x1, double y1)
{
	n = n1;
	side = side1;
	x = x1;
	y = y1;
}

//Calculates the perimeter
double RegularPolygon::getPerimeter() const
{
	return n*side;
}

//Calculates the area; formula given by book
double RegularPolygon::getArea() const
{
	return (n*side*side) / (4 * tan(3.14159 / n));
}

//Mutator function for number of sides
void RegularPolygon::setn(int n1)
{
	n = n1;
}

//Accessor function for number of sides
int RegularPolygon::getn()
{
	return n;
}

//Mutator function for length of sides
void RegularPolygon::setSide(double side1)
{
	side = side1;
}

//Accessor function for length of sides
double RegularPolygon::getSide()
{
	return side;
}

//Mutator function for x-coordinate
void RegularPolygon::setx(double x1)
{
	x = x1;
}

//Accessor function for x-coordinate
double RegularPolygon::getx()
{
	return x;
}

//Mutator function for y-coordinate
void RegularPolygon::sety(double y1)
{
	y = y1;
}

//Accessor function for y-coordinate
double RegularPolygon::gety()
{
	return y;
}
