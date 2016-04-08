////////////////////////////
//Program: EX05_01
//Name: Marika Witt
//3/31/2016
//Class & Section: 172-1
////////////////////////////

#include <iostream>
using namespace std;


int main()
{
	int arraysize;
	double sum = 0;

	//Ask user to input how many numbers will be in the array
	cout << "Enter your desired array size: " << endl;
	cin >> arraysize;
	
	//Create a pointer to accommodate the new array size
	int*usernumbers = new int[arraysize];

	//Loop for user to enter numbers
	for (int i = 0; i < arraysize; i++)
	{
		//Prompt user to enter numbers
		cout << "Enter a number: " << endl;
		cin >> usernumbers[i];
		sum += usernumbers[i]; //Adds all the numbers together
	}

	//Calculates the average
	double average = sum / arraysize;

	//Loop to count all the numbers above the average
	int count = 0;
	for (int i = 0; i < arraysize; i++)
		if (usernumbers[i] > average)
			count++;

	//Output the average and number of elements above average
	cout << "The average is: " << average << endl;
	cout << "The number of elements above the average: " << count << endl;

	return 0;
}