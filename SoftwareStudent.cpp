#include "SoftwareStudent.h"
#include <iostream>

//SoftwareStudent::SoftwareStudent() {}

SoftwareStudent::SoftwareStudent(string sID, string fName, string lName, string e, int a, int* numDays, Degree deg) :Student(sID, fName, lName, e, a, numDays) {
    degree = deg;
}

Degree SoftwareStudent::getDegree() {
    return degree;
}

void SoftwareStudent::print() {
    cout << "First Name: " << getFirstName() << "\t" << "Last Name: " << getLastName() << "\t" << "Age: " << getAge() << "\t"
        << "Number of Days in Courses: { " << getNumDays()[0] << ", " << getNumDays()[1] << ", " << getNumDays()[2] << " } " << endl;
    cout << "Degree Program: Software" << endl;

}