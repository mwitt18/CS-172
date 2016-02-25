////////////////////////
//Program Name: ex01_05
//Name: Marika Witt
//Class: CS 172-1
//Date: 2/12/16
////////////////////////

#include <iostream>
using namespace std;

//Declare the void functions in this program
void ex05();
void printarray(double numbers[], int arraySize);
void containarray(double numbers[], int arraySize);

//Write a loop that asks the user for five integers, and stores those integer values in an array.

int main()
{
	int x = 0; int y = 0;
	ex05(); //Display sum & product of numbers in the array

	
}

void ex05() //Function takes no arguments, returns void
{
	const int fiveintegers = 5; //Number of elements in the array
	int arraysize;
	int sum = 0; 
	int product = 1; 
	double numbers[fiveintegers]; //The array

	//Ask the user to input five integers
	cout << "Enter five integers: ";

	//Loop to add and multiply the numbers in the array
	for (int i = 0; i < fiveintegers; i++)
	{
		cin >> numbers[i];
		sum += numbers[i]; //Add the sum of the numbers in the array
		product *= numbers[i]; //Multiply the numbers in the array
	}

	cout << "The sum of the numbers you entered is: " << sum << endl;
	cout << "The product of the numbers you entered is: " << product << endl;

	printarray(numbers, 5); //Print the numbers in the array
	cout << endl;

	containarray(numbers, 5); //Show whether the user's number is in the array
	cout << endl;
}

//Write a function that takes an array and the size of the array, and outputs the values in that array. Call the array 
//from your ex05 function, passing the array of 5 integers from (a)

void printarray(double numbers[], int arraySize) //Array to display array to the user
{
	cout << "The numbers you entered are: ";

	//Loop to display the numbers in the array
	for (int i = 0; i < arraySize; i++)
	{
		cout << numbers[i] << " "; //Shows each number as i increments
	}
}

void containarray(double numbers[], int arraySize) 
{
	double usernumber;
	cout << "Enter a number: "; //Prompt user to enter a number
	cin >> usernumber;

	//If the number is not in the array, say so
	if (usernumber != numbers[0] && usernumber != numbers[1] && usernumber != numbers[2] && usernumber != numbers[3] && usernumber != numbers[4])
		cout << "Your number is not in the array." << endl;

	//If the number is not NOT in the array, then say that it is in the array
	else
		cout << "Your number is in the array." << endl;
}