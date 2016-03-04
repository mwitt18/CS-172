/////////////////////////////////////////////////////////////////
//Program Name: Exam 1
//Name: Marika Witt
//Class: CS 172-1
//Date: 3/3/16
//I affirm that all code given below was written solely by me, 
//Marika Witt, and that any help I received adhered to the rules 
//stated for this exam.
/////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include "Venue.h"
#include "Event.h"

using namespace std;

bool Venue::validTime(int time) {
	//If time is taken, return false
	//Check for time in array?
	for (int i; i < 12; i++) {
		scheduledEvents[i].getTime();
		//Somehow create a loop so that if two times are the same, it returns false
		if (scheduledEvents[i].getTime() == scheduledEvents[i].getTime())
			return false;
	}
}

void Venue::addEvent(int time, string name) {
	int i;
	cin >> scheduledEvents[i].getTime() >> scheduledEvents[i].getTitle(); //User inputs time & title of event at i
	if (validTime(time) == false) //If the time has already been taken
		cout << "Couldn't schedule event :(" << endl; //Default event
	else
		cout << "Event scheduled!" << endl; //Show this if the time hasn't already been taken
}

Event Venue::findEvent(int time) {
	//Looks for name of event in array at certain time, displays in cout 
	//Time should align with certain 'i' of array
	//User inputs 10, so whatever the title is at the corresponding i should show up

	for (int i; i < 12; i++) {
		scheduledEvents[i].getTime();
		if (scheduledEvents[i].getTime() == 10) //The corresponding i to time 10 should show here
			cout << scheduledEvents[i].getTitle() << endl; //The corresponding title to this i should show here
	}
}

Event Venue::findEvent(string name) {
		//Looks for time of event in array with certain name, displays in cout 
	for (int i; i < 12; i++) {
		scheduledEvents[i].getTitle();
		if (scheduledEvents[i].getTitle() == "Brunch w/ Bob") //The corresponding i to title "Brunch w/ Bob" should show here
			cout << scheduledEvents[i].getTime() << endl; //The corresponding time to this i should show here
	}
}