#ifndef RegularPolygon_h
#define RegularPolygon_h

//Declare RegularPolygon class
class RegularPolygon
{
//Private variables
private: 
	int n;
	double side;
	double x;
	double y;

//Public functions
public:
	RegularPolygon();
	RegularPolygon(int, double);
	RegularPolygon(int, double, double, double);
	double getPerimeter() const;
	double getArea() const;
	void setn(int);
	int getn();
	void setSide(double);
	double getSide();
	void setx(double);
	double getx();
	void sety(double);
	double gety();
};

#endif 
