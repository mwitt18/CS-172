#include <iostream>
#include <string>
#include <cmath>
#include<math.h>
#include "City.h"

using namespace std;

Seattle::Seattle() // no argument constructor
{
	loan = 0;
	interestrate = 0;
	numyears = 0;
	monthlypayment = 0;
}

void Seattle::setinterestrate() // sets interest rate
{
	interestrate = .07;
}

double Seattle::getinterestrate() // gets interest rate
{
	return (interestrate * 100);
}

double Seattle::calculatemonthlypayment(double loan, double interestrate, int numyears) // calculates monthly payment
{
	const double e = 2.718281828;
	double exponent = interestrate*numyears; // creates exponent part of equation
	double ert = pow(e, exponent); // raises e to the power of the value above
	double rert = ert*interestrate; // multiplies value above by the interest rate
	double yearlypayment = ((-(loan)*(rert)) / (1 - ert)); // calculates yearly payment required
	double monthlypayment = yearlypayment / 12; // divides yearly payment by 12 to get monthly payment
	return monthlypayment; // returns monthly payment
}

Boring::Boring() // no argument constructor
{
	loan = 0;
	interestrate = 0;
	numyears = 0;
	monthlypayment = 0;
}

void Boring::setinterestrate() // sets interest rate
{
	interestrate = .016;
}

double Boring::getinterestrate() // gets interest rate
{
	return (interestrate * 100);
}

double Boring::calculatemonthlypayment(double loan, double interestrate, int numyears) // calculates monthly payment
{
	const double e = 2.718281828;
	double exponent = interestrate*numyears; // creates exponent part of equation
	double ert = pow(e, exponent); // raises e to the power of the value above
	double rert = ert*interestrate; // multiplies value above by the interest rate
	double yearlypayment = ((-(loan)*(rert)) / (1 - ert)); // calculates yearly payment required
	double monthlypayment = yearlypayment / 12; // divides yearly payment by 12 to get monthly payment
	return monthlypayment; // returns monthly payment
}

Toronto::Toronto() // no argument constructor
{
	loan = 0;
	interestrate = 0;
	numyears = 0;
	monthlypayment = 0;
}

void Toronto::setinterestrate() // sets interest rate
{
	interestrate = .065;
}

double Toronto::getinterestrate() // gets interest rate
{
	return (interestrate * 100);
}

double Toronto::calculatemonthlypayment(double loan, double interestrate, int numyears) // calculates monthly payment
{
	const double e = 2.718281828;
	double exponent = interestrate*numyears; // creates exponent part of equation
	double ert = pow(e, exponent); // raises e to the power of the value above
	double rert = ert*interestrate; // multiplies value above by the interest rate
	double yearlypayment = ((-(loan)*(rert)) / (1 - ert)); // calculates yearly payment required
	double monthlypayment = yearlypayment / 12; // divides yearly payment by 12 to get monthly payment
	return monthlypayment; // returns monthly payment
}
double Toronto::convertcurrency(double monthlypayment) // converts Canadian currency to American currency
{
	double canadianDollar = (monthlypayment * 1.27);
	return canadianDollar;
}

Tokyo::Tokyo() // no argument constructor
{
	loan = 0;
	interestrate = 0;
	numyears = 0;
	monthlypayment = 0;
}

void Tokyo::setinterestrate() // sets interest rate
{
	interestrate = .053;
}

double Tokyo::getinterestrate() // gets interest rate
{
	return (interestrate * 100);
}

double Tokyo::calculatemonthlypayment(double loan, double interestrate, int numyears) // calculates monthly payment
{
	const double e = 2.718281828;
	double exponent = interestrate*numyears; // creates exponent part of equation
	double ert = pow(e, exponent); // raises e to the power of the value above
	double rert = ert*interestrate; // multiplies value above by the interest rate
	double yearlypayment = ((-(loan)*(rert)) / (1 - ert)); // calculates yearly payment required
	double monthlypayment = yearlypayment / 12; // divides yearly payment by 12 to get monthly payment
	return monthlypayment; // returns monthly payment
}
double Tokyo::convertcurrency(double monthlypayment) // converts Japanese currency to American currency
{
	double yen = (monthlypayment*106.22);
	return yen;
}

Paramaribo::Paramaribo() // no argument constructor
{
	loan = 0;
	interestrate = 0;
	numyears = 0;
	monthlypayment = 0;
}

void Paramaribo::setinterestrate() // sets interest rate
{
	interestrate = .048;
}

double Paramaribo::getinterestrate() // gets interest rate
{
	return (interestrate * 100);
}

double Paramaribo::calculatemonthlypayment(double loan, double interestrate, int numyears) // calculates monthly payment
{
	const double e = 2.718281828;
	double exponent = interestrate*numyears; // creates exponent part of equation
	double ert = pow(e, exponent); // raises e to the power of the value above
	double rert = ert*interestrate; // multiplies value above by the interest rate
	double yearlypayment = ((-(loan)*(rert)) / (1 - ert)); // calculates yearly payment required
	double monthlypayment = yearlypayment / 12; // divides yearly payment by 12 to get monthly payment  
	return monthlypayment; // returns monthly payment
}
double Paramaribo::convertcurrency(double monthlypayment) // converts Surinamese currency to American currency
{
	double ParamariboCurrency = (monthlypayment * 5.44);
	return ParamariboCurrency;
}