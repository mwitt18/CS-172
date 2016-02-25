/////////////////////////
//Program: EX01_02
//Name: Marika Witt
//Class: CS 172-1
//Date: 2/9/16
////////////////////////

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void ex02(int x, int y); //List the only void function here

int main()
{
	int x = 0;
	int y = 0;
	ex02(x, y); //Call void function
}

void ex02 (int x, int y)
{
//Declare int variables
int value;
int boxwidth;
int bookwidth;
int shelflife;
int temp;
srand(time(0)); //Declare this so that random numbers aren't repeated
bool hasPassedTest = true; //Declare hasPassedTest as true

//Make x and y random numbers
x = rand() % 10; 
y = rand() % 10;	

if (x > y) //If x is greater than y, say so
cout << "x is greater than y." << endl;
else //If x is less than y, say so
cout << "x is less than y." << endl;

int numberOfShares;
cout << "Enter a value: "; //Prompt user to enter a value
cin >> value;

//Tell user whether their number is less than or greater than 100
if (value < 100)
	cout << "Your value is less than 100." << endl;
else
cout << "Your value is not less than 100." << endl;

//Prompt user for box and book widths
cout << "Enter a box width: ";
cin >> boxwidth;
cout << "Enter a book width: ";
cin >> bookwidth;

//Tell user whether the box width is evenly divisible by the book width
if (boxwidth % bookwidth == 0) //If mod = 0, then it is evenly divisible
	cout << "The box width is evenly divisible by the book width." << endl;
else //If mod does not equal 0, then it is not evenly divisible
	cout << "The box width is not evenly divisible by the book width." << endl;

//Prompt user to enter shelf life of chocolate and outside temperature
cout << "Enter the shelf life of a box of chocolate: ";
cin >> shelflife;
cout << "Enter the outside temperature: ";
cin >> temp;


if (temp > 90) //If the temperature is greater than 90, then decrease shelflife by 4
{
	shelflife = shelflife - 4;
	cout << "The chocolate's shelflife is: " << shelflife << endl;
}
else //If the temperature is not greater than 90, leave it as is
cout << "The chocolate's shelflife is: " << shelflife << endl;
}