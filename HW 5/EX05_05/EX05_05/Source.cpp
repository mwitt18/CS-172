//////////////////////////
//Program Name: EX05_05
//Name: Marika Witt
//Class: 172-2
//Date: 4/7/16
/////////////////////////

#include <iostream>
#include "Course.h"
using namespace std;

//Overload constructor
Course::Course(const string& courseName, int capacity)
{
	numberOfStudents = 0;
	this->courseName = courseName; //Sets course name
	this->capacity = capacity;
	students = new string[capacity];
}

//Gets rid of dynamic array
Course::~Course()
{
	delete[] students;
}

//To get the name of course
string Course::getCourseName() const
{
	return courseName;
}

//Doubles capacity
void Course::addStudent(const string& name)
{
	students[numberOfStudents] = name;
	numberOfStudents++; //Increases number of students
	if (numberOfStudents == capacity)
	{
		const int doublecapacity = capacity * 2;
		string *newarray = new string[doublecapacity];
	}
}

//Drops one student
void Course::dropStudent(const string& name)
{
	//
}

//Function to get students
string* Course::getStudents() const
{
	return students;
}

//Function to find number of students
int Course::getNumberOfStudents() const
{
	return numberOfStudents;
}

//Removes all students from the course
void clear()
{
	numberOfStudents[capacity] = 0;
	capacity--;
}

int main()
{
	Course course1;
	course1.addStudent("Bob");
	course1.addStudent("Bill");
	course1.addStudent("Sally");

	cout << "The three students are: " << course1.getStudents()[0] << endl;
	course1.dropStudent();
	cout << "The two students left in the course are: " << course1.getStudents()[0] << endl;
	~Course();
}