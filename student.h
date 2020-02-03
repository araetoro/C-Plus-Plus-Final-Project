//Create the base class Student in the files student.h and student.cpp, which includes each  of the following variables:

#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "Degree.h"
using namespace std;

class Student {
public:
    //variable accessors (getter)
    char getStudentID();
    string getFirstName();
    string getLastName();
    string getEmailAddress();
    int getAge();
    int *getDaysToComplete();
    string getDegreeTypes()

    //variable mutators (setter)
    void setStudentID(int studentID);
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setEmailAddress(string emailAddress);
    void setAge(int age);
    void setDaysToComplete(int day0, int day1, int day2);
    void setDegreeTypes(string degree);

private:
    int studentId const;
    string firstName const;
    string lastName const;
    string emailAddress const;
    int age const;
    int daysToComplete[3] const;
    string degreeTypes const;


};

#endif //STUDENT_H
