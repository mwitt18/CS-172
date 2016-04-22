#ifndef ACCOUNT_H
#define CIRCLE_H

class Account
{
private: 
	int id;
	double balance;
	double annualInterestRate;
public: 
	Account();
	void setid();
	double getid;
	void setbalance();
	double getbalance;
	void setannualInterestRate();
	double getannualInterestRate;
	double getMonthlyInterestRate();
	double withdraw(double amount);
	double deposit(double amount);
};

#endif