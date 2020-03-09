#include "SecurityStudent.h"
#include <iostream>

//SecurityStudent::SecurityStudent() {}

SecurityStudent::SecurityStudent(string sID, string fName, string lName, string e, int a, int* numDays, Degree deg) :Student(sID, fName, lName, e, a, numDays) {
    degree = deg;
}

Degree SecurityStudent::getDegree() {
    return degree;
}

void SecurityStudent::print() {
    cout << "First Name: " << getFirstName() << endl;
    cout << "First Name: " << getFirstName() << "\t" << "Last Name: " << getLastName() << "\t" << "Age: " << getAge() << "\t"
        << "Number of Days in Courses: { " << getNumDays()[0] << ", " << getNumDays()[1] << ", " << getNumDays()[2] << " } " << endl;
    cout << "Degree Program: Security" << endl;

}