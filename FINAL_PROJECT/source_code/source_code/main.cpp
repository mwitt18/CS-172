////////////////////////////////////
//Project Name: Final Project
//Name: Marika Witt & Scott Bingham
//Date: 04/28/16
//Class: 172-1
////////////////////////////////////

#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include "City.h"

using namespace std;

void intro() // Intro function that informs the user of the background of the problem
{
	cout << "A computer virus has run rampant and has led to World War III. " << endl;
	cout << "Almost every city on Earth has been destroyed! " << endl;
	cout << "There are only five cities remaining: Seattle, Boring, Toronto, Tokyo, and Paramaribo. " << endl;
	cout << "You are required to move to one of these five cities. " << endl;
	cout << "You need to find a home you can afford! " << endl;
	cout << endl;
}
void PlayAgain();

void initialquestions()
{
	string cityname;
	double loan;
	double interestrate;
	int numyears;
	double monthlypayment;
	cout << "Which city would you like to live in? "; // asks the user which city they wish to live in
	cin >> cityname;
	if (cityname == "Seattle" || cityname == "seattle") // user response is Seattle
	{
		Seattle S1;
		cout << endl;
		S1.setinterestrate();
		double interestrate = (S1.getinterestrate() / 100); // divide by 100 to calculate decimal value of interest rate
		cout << "Don't forget a rain jacket! " << endl;
		cout << "The median value of a home in Seattle is $557,000" << endl; // outputs median value of a home in Seattle
		cout << "The interest rate for purchasing a home in Seattle is " << S1.getinterestrate() << "%" << endl; // outputs interest rate in Seattle
		cout << "How big of a loan do you want to take out for purchasing your home? $"; // asks the user how big of a loan they wish to take out
		cin >> loan;
		cout << endl;
		cout << "In how many years would you like to have the loan paid off? "; // asks the user how many years they want the home to be paid off in
		cin >> numyears;
		cout << endl;
		ofstream output;
		output.open("Seattle.txt"); // outputs all the information in a text file
		output << "City Name: Seattle " << endl;
		output << "Median Home Value: $557,000" << endl;
		output << "Interest Rate: " << S1.getinterestrate() << "%" << endl;
		output << "Loan Amount: " << "$" << loan << endl;
		output << "It will cost you: $" << S1.calculatemonthlypayment(loan, interestrate, numyears) << " per month to pay off the loan in " << numyears << " years" << endl; // outputs monthly payment required
		output.close(); // closes text file
	}
	else if (cityname == "Boring" || cityname == "boring")
	{
		Boring B1;
		cout << endl;
		B1.setinterestrate();
		double interestrate = (B1.getinterestrate() / 100);
		cout << "The median value of a home in Boring is $298,000" << endl; // outputs median value of a home in Boring
		cout << "The interest rate for purchasing a home in Boring is " << B1.getinterestrate() << "%" << endl; // outputs interest rate in Boring
		cout << "How big of a loan do you want to take out for purchasing your home? $"; // asks the user how big of a loan they wish to take out
		cin >> loan;
		cout << endl;
		cout << "In how many years would you like to have the loan paid off? "; // asks the user how many years they want the home to be paid off in
		cin >> numyears;
		cout << endl;
		ofstream output;
		output.open("Boring.txt"); // outputs all the information in a text file
		output << "City Name: Boring " << endl;
		output << "Median Home Value: $298,000" << endl;
		output << "Interest Rate: " << B1.getinterestrate() << "%" << endl;
		output << "Loan Amount: " << "$" << loan << endl;
		output << "It will cost you: $" << B1.calculatemonthlypayment(loan, interestrate, numyears) << " per month to pay off the loan in " << numyears << " years" << endl;
		output.close(); // closes text file
	}
	else if (cityname == "Toronto" || cityname == "toronto")
	{
		Toronto T1;
		cout << endl;
		T1.setinterestrate();
		double interestrate = (T1.getinterestrate() / 100);
		cout << "The median value of a home in Toronto is $740,000 Canadian dollars which is equivalent to $576,000 U.S. dollars" << endl; // outputs median value of a home in Toronto
		cout << "The interest rate for purchasing a home in Toronto is " << T1.getinterestrate() << "%" << endl; // outputs interest rate in Toronto
		cout << "How big of a loan (in U.S. dollars) do you want to take out for purchasing your home? $"; // asks the user how big of a loan they wish to take out
		cin >> loan;
		cout << endl;
		cout << "In how many years would you like to have the loan paid off? "; // asks the user how many years they want the home to be paid off in
		cin >> numyears;
		cout << endl;
		double monthlypayment = T1.calculatemonthlypayment(loan, interestrate, numyears);
		ofstream output;
		output.open("Toronto.txt"); // outputs all the information in a text file
		output << "City Name: Toronto " << endl;
		output << "Median Home Value: $740,000 Canadian dollars which is equivalent to $576,000 U.S. dollars" << endl;
		output << "Interest Rate: " << T1.getinterestrate() << "%" << endl;
		output << "Loan Amount: " << "$" << loan << endl;
		output << "It will cost you: $" << T1.calculatemonthlypayment(loan, interestrate, numyears) << " per month to pay off the loan in " << numyears << " years" << endl;
		output << "This is equal to $" << T1.convertcurrency(monthlypayment) << " Canadian dollars per month" << endl;
		output.close(); // closes text file
	}
	else if (cityname == "Tokyo" || cityname == "tokyo")
	{
		Tokyo TO1;
		cout << endl;
		TO1.setinterestrate();
		double interestrate = (TO1.getinterestrate() / 100);
		cout << "The median value of a home in Tokyo is 34,150,000 yen which is equivalent to $285,000 U.S. dollars" << endl; // outputs median value of a home in Tokyo
		cout << "The interest rate for purchasing a home in Tokyo is " << TO1.getinterestrate() << "%" << endl; // outputs interest rate in Tokyo
		cout << "How big of a loan (in U.S. dollars) do you want to take out for purchasing your home? $"; // asks the user how big of a loan they wish to take out
		cin >> loan;
		cout << endl;
		cout << "In how many years would you like to have the loan paid off? "; // asks the user how many years they want the home to be paid off in
		cin >> numyears;
		cout << endl;
		double monthlypayment = TO1.calculatemonthlypayment(loan, interestrate, numyears);
		ofstream output;
		output.open("Tokyo.txt"); // outputs all the information in a text file
		output << "City Name: Tokyo " << endl;
		output << "Median Home Value: 34,150,000 yen which is equivalent to $285,000 U.S. dollars" << endl;
		output << "Interest Rate: " << TO1.getinterestrate() << "%" << endl;
		output << "Loan Amount: " << "$" << loan << endl;
		output << "It will cost you: $" << monthlypayment << " per month to pay off the loan in " << numyears << " years" << endl;
		output << "This is equal to " << TO1.convertcurrency(monthlypayment) << " yen per month" << endl;
		output.close(); // closes text file
	}
	else if (cityname == "Paramaribo" || cityname == "paramaribo")
	{
		Paramaribo P1;
		cout << endl;
		P1.setinterestrate();
		double interestrate = (P1.getinterestrate() / 100);
		cout << "The median value of a home in Paramaribo is 1,659,200 Surinamese dollars which is equal to $305,000 U.S. dollars" << endl; // outputs median value of a home in Paramaribo
		cout << "The interest rate for purchasing a home in Paramaribo is " << P1.getinterestrate() << "%" << endl; // outputs interest rate in Paramaribo
		cout << "How big of a loan do you want to take out for purchasing your home? $"; // asks the user how big of a loan they wish to take out
		cin >> loan;
		cout << endl;
		cout << "In how many years would you like to have the loan paid off? "; // asks the user how many years they want the home to be paid off in
		cin >> numyears;
		cout << endl;
		double monthlypayment = P1.calculatemonthlypayment(loan, interestrate, numyears);
		ofstream output;
		output.open("Paramaribo.txt"); // outputs all the information in a text file
		output << "City Name: Paramaribo " << endl;
		output << "Median Home Value: 1,659,200 Surinamese dollars which is equal to $305,000 U.S. dollars" << endl;
		output << "Interest Rate: " << P1.getinterestrate() << "%" << endl;
		output << "Loan Amount: " << "$" << loan << endl;
		output << "It will cost you: $" << monthlypayment << " per month to pay off the loan in " << numyears << " years" << endl;
		output << "This is equal to " << P1.convertcurrency(monthlypayment) << " Surinamese dollars per month" << endl;
		output.close(); // closes text file
	}
	else
	{
		cout << "That city was blown up. ";
		initialquestions();
	}
	cout << "Would you like to choose another city? (y or n): ";
	PlayAgain();
}
void PlayAgain() // Play Again function that asks the user if they want to choose another city
{
	char answer;
	cin >> answer;
	if (answer == 'Y' || answer == 'y') // if the user answers that they want to play again it calls the initial questions function
	{
		initialquestions();
	}
	else if (answer == 'N' || answer == 'n') // if the user answers that they do not want to play again it thanks the user and ends the program
	{
		cout << endl;
		cout << "Thanks for participating! We hope you find a home!" << endl;
	}
	else // if the user enters an invalid response it prompts the user to enter another response
	{
		cout << "Invalid Response. Try again: ";
		cin >> answer;
		PlayAgain();
	}
}

int main()
{
	ofstream output;
	intro(); // calls the intro function
	initialquestions(); // calls the initial questions function
}