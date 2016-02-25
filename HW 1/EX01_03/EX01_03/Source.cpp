////////////////////////
//Program Name: EX01_03
//Name: Marika Witt
//Class: CS 172-1
//Date: 2/9/16
///////////////////////

#include <iostream>
#include <string>
using namespace std;

void ex03(double area, double length); //List void function here

int main()
{
	//Declare variables
	double area = 0;
	double length = 0;
	ex03(area, length); //Call void function
}

void ex03(double area, double length)
{
	double diagonal;
	char answer; 
	cout << "Enter the area of a square: "; //Prompt user to enter area of square
	cin >> area;
	length = sqrt(area); //Formula for length of square
	diagonal = length * sqrt(2); //Formula for diagonal of square
	cout << "The length of the diagonal for the square is: " << diagonal << endl; //Display length of diagonal

	cout << "Enter a 'y' or an 'n': "; //Prompt user for 'y' or 'n'
	cin >> answer; //Answer is char
	if (answer == 'y') //'y' means 'yes'
		cout << "yes" << endl;
	else //'n' means 'no'
		cout << "no" << endl;

	char tab = '\t'; //One way to display the tab symbol
	string mailingAddress;
	cout << "What is your mailing address?: "; //Prompt user for mailing address; this will be a string
	cin >> mailingAddress; //String																				/*   ---Joseph---   The idea here was grabbing multiple words from the user. code: cin.ignore(); getline(cin, MailingAddress);     (-1)*/
	string empty = ""; //Empty string does not contain anything
}