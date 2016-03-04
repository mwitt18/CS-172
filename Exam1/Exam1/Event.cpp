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
#include "Event.h"
#include "Venue.h"

using namespace std;

//No-argument constructor
Event::Event() {
	Time = 0;
	Title = "";
}

//Overload constructor
Event::Event(int time, string name) {
	Time = time;
	Title = name;
}

//Accessor function
int Event::getTime() { //Getter
	return Time;
}

//Accessor function
string Event::getTitle() { //Getter
	return Title;
}

//Mutator function
void Event::setTime(int t) {
	Time = t;
}

//Mutator function
void Event::setTitle(string name) {
	Title = name;
}