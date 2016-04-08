/////////////////////////
//Project Name: EX05_03
//Name: Marika Witt
//Date: 4/4/16
//Class: 172-2
/////////////////////////

#include <iostream>
#include <algorithm>
using namespace std;

void findMinimum(int list[]);

int main()
{
	//Create array
	int list[] = { 1, 2, 4, 5, 10, 100, 2, -22 };

	//Call void function
	findMinimum(list);
}

//Function to find minimum
void findMinimum(int list[])
{
	//Finds smallest number in the array
	int*min = min_element(list, list + 8); 

	//Displays the smallest number in the array
	cout << "Your minimum is: " << *min << endl; 
}