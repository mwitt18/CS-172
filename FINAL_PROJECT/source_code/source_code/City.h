
#ifndef City_h
#define City_h
#include <string>

using namespace std;

class Seattle
{
private: // private variables for Seattle
	double interestrate;
	double loan;
	int numyears;
	double monthlypayment;
public: // public variables for Seattle
	Seattle();
	void setinterestrate();
	double getinterestrate();
	double calculatemonthlypayment(double loan, double interestrate, int numyears);
};

class Boring
{
private: // private variables for Boring
	double interestrate;
	double loan;
	int numyears;
	double monthlypayment;
public: // public variables for Boring
	Boring();
	void setinterestrate();
	double getinterestrate();
	double calculatemonthlypayment(double loan, double interestrate, int numyears);
};

class Toronto
{
private: // private variables for Toronto
	double interestrate;
	double loan;
	int numyears;
	double monthlypayment;
public: // public variables for Toronto
	Toronto();
	void setinterestrate();
	double getinterestrate();
	double calculatemonthlypayment(double loan, double interestrate, int numyears);
	double convertcurrency(double monthlypayment);
};

class Tokyo
{
private: // private variables for Tokyo
	double interestrate;
	double loan;
	int numyears;
	double monthlypayment;
public: // public variables for Tokyo
	Tokyo();
	void setinterestrate();
	double getinterestrate();
	double calculatemonthlypayment(double loan, double interestrate, int numyears);
	double convertcurrency(double monthlypayment);
};

class Paramaribo
{
private: // private variables for Paramaribo
	double interestrate;
	double loan;
	int numyears;
	double monthlypayment;
public: // public variables for Paramaribo
	Paramaribo();
	void setinterestrate();
	double getinterestrate();
	double calculatemonthlypayment(double loan, double interestrate, int numyears);
	double convertcurrency(double monthlypayment);
};

#endif