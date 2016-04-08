//////////////////////////
//Program Name:EX05_02
//Name: Marika Witt
//Date: 3/31/2016
//Class & Section: 172-1
//////////////////////////

#include <iostream>
using namespace std;

int* doubleCapacity(const int* list, int size);

int main()
{
	int arraysize;

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
	}

	//Calls doubleCapacity function
	doubleCapacity(usernumbers, arraysize);

	//Displays all the numbers in the array
	for (int i = 0; i < 2*arraysize; i++)
	{
		cout << *(usernumbers + i) << endl;
	}

	return 0;
}

//Function to double the capacity of the array
int* doubleCapacity(const int* list, int size)
{
	//Allocate the array
	int*doubleCapacity2 = new int[2 * size];

	//Copies the array from list to doubleCapacity2
	for (int i = 0; i < size; i++)
	{
		*(doubleCapacity2 + i) = *(list + i);
	}

	return doubleCapacity2;
}