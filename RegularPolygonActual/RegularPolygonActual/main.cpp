#include <iostream>
#include <cmath>
#include "RegularPolygon.h"
using namespace std;

int main()
{
	//Declare three objects
	RegularPolygon Polygon1;
	RegularPolygon Polygon2(6, 4);
	RegularPolygon Polygon3(10, 4, 5.6, 7.8);

	//Display polygon 1's perimeter and area
	cout << "Polygon 1's perimeter is: " << Polygon1.getPerimeter() << endl;
	cout << "Polygon 1's area is: " << Polygon1.getArea() << endl;

	//Display polygon 2's perimeter and area
	cout << "Polygon 2's perimeter is: " << Polygon2.getPerimeter() << endl;
	cout << "Polygon 2's area is: " << Polygon2.getArea() << endl;

	//Display polygon 3's perimeter and area
	cout << "Polygon 3's perimeter is: " << Polygon3.getPerimeter() << endl;
	cout << "Polygon 3's area is: " << Polygon3.getArea() << endl;
}
