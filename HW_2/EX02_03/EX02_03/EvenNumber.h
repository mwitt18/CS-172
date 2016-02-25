#ifndef EVENNUMBER_H
#define EVENNUMBER_H

class EvenNumber
{
private: 
	//Private values; can't be changed
	int value;
	int nextvalue;
	int previousvalue;

public:
	//Constructor
	EvenNumber() {
		//Initialize values
		value = 0;
		nextvalue = 0;
		previousvalue = 0;
	}

	//Returns new value from void function below
	int getValue() {
		return value;
	}

	void setValue(int newvalue) {
		//For even numbers
		if (newvalue % 2 == 0) 
			value = newvalue;
		//For odd numbers
		else 
			value = newvalue + 1; //New current even number
	}

	//Function to get the next even number
	int getNext() {
		nextvalue = value + 2;
		return nextvalue; 
	}

	//Function to get the previous even number
	int getPrevious() {
		previousvalue = value - 2;
		return previousvalue; 
	}
};

#endif