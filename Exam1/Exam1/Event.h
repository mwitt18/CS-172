/////////////////////////////////////////////////////////////////
//Program Name: Exam 1
//Name: Marika Witt
//Class: CS 172-1
//Date: 3/3/16
//I affirm that all code given below was written solely by me, 
//Marika Witt, and that any help I received adhered to the rules 
//stated for this exam.
/////////////////////////////////////////////////////////////////

#ifndef event_h
#define event_h

//These classes come from the UML
class Event {
private:
	int Time;
	string Title;
public:
	Event();
	Event(int, string);
	int getTime();
	string getTitle();
	void setTime(int);
	void setTitle(string);
};

#endif