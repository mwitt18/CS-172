////////////////////////
//Program Name: EX02_03
//Name: Marika Witt
//Class: 172-1
//Date: 2/24/16
////////////////////////

#include "EvenNumber.h" //Call functions from header
#include <iostream>
using namespace std;

int main()
{
	EvenNumber num; //New value num
	num.setValue(16); //Set 16 as the current even number
	
	//Display the current, previous, and next numbers
	cout << "The current even number is: " << num.getValue() << endl;
	cout << "The even number after is: " << num.getNext() << endl;
	cout << "The even number before is: " << num.getPrevious() << endl;

}