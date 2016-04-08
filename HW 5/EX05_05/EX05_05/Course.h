#ifndef COURSE_H
#define COURSE_H
#include <string>
using namespace std;

class Course
{
public: //Can be accessed by anyone
    Course(const string& courseName, int capacity);
    ~Course();
    string getCourseName() const;
    void addStudent(const string& name);
    void dropStudent(const string& name);
    string* getStudents() const;
    int getNumberOfStudents() const;
    
private: //Cannot be accessed by public
    string courseName;
    string* students;
    int numberOfStudents;
    int capacity;
};

#endif
