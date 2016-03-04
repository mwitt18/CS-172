/////////////////////////////////////////////////////////////////
//Program Name: Exam 1
//Name: Marika Witt
//Class: CS 172-1
//Date: 3/3/16
//I affirm that all code given below was written solely by me, 
//Marika Witt, and that any help I received adhered to the rules 
//stated for this exam.
/////////////////////////////////////////////////////////////////

#ifndef venue_h
#define venue_h

class Venue {
private: 
	Event scheduledEvents[12];
	int numEvents;
	bool validTime(int);
public:
	Venue();
	Venue(Event);
	void addEvent(int, string);
	Event findEvent(int);
	Event findEvent(string);
};

#endif