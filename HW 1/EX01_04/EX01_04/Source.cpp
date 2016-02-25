////////////////////////
//Program Name: EX01_04
//Name: Marika Witt
//Class: 172-1
//Date: 2/9/16
////////////////////////

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void ex04(int number);
int lettere(int number);
int add(int rand1, int rand2);
int letterg(int & r);

int main()
{
	int number = 0;
	ex04(number); //Call void function

	srand(time(0)); //To ensure random numbers aren't repeated
	//Create two random numbers
	int rand1 = rand() % 10;
	int rand2 = rand() % 10;
	add(rand1, rand2); //Call void function

	srand(time(0));
	int r = rand() % 10; //Generate another random number

	cout << "Here is a randomly-generated number: " << r << endl; //Display the random number
	
	letterg(r); //Pass by reference
	cout << "Your new number is: " << r << endl; //Display +1 of random number
	
}

void ex04(int number)
{
	//Declare int variables
	int cubednum = 1;
	int asterisk = 1;
	int sum = 0;
	cout << "Enter a number between 1 and 10: "; //Prompt user for a number between 1 and 10
	cin >> number;
	while (number < 1 || number > 10) //If number is not within the given range
	{
		cout << "Invalid input. Try again!" << endl;
		cout << "Enter a number between 1 and 10: "; //Loops and keeps asking for number within given range
		cin >> number;
	}

	for (int x = 1; x <= number; x++) //Loop to sum cubed numbers
	{
		cubednum = x*x*x; //Equation for cubing a number
		sum = sum + cubednum; //Sum keeps adding onto itself
	}

	//Display sum of the cubes
	cout << "The sum of the cubes from 1 to the number given is: " << sum << endl;

	do //Do this loop for the number of asterisks
	{
		cout << "*";
		asterisk++;
	} while (asterisk <= number); //Do loop until given number
	cout << endl;

	//Output the even numbers from 0 to 40.
	for (int evennum = 0; evennum <= 40; evennum++)
	{
		if (evennum % 2 == 0) //If a number divided by 2 is 0, then it is even
			cout << evennum << " "; //Display the even numbers
	}
	cout << endl;

	lettere(number); //Call function int lettere(number)
}

int lettere(int number)
{
	int newdouble = number * 2; //Doubles given number
	cout << newdouble << endl;
	return newdouble; //Return the new number
}

int add(int rand1, int rand2)
{
	int sum = 0;
	sum = rand1 + rand2; //Equation of the sum of random numbers
	cout << sum << endl; //Display the sum of random numbers
	return sum; //Returns final sum
}

int letterg(int & r) //r is a reference variable
{
	r = r + 1; //Increment r, the random number
	return r;
}