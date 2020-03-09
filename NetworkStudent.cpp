#include "NetworkStudent.h"
#include <iostream>

//NetworkStudent::NetworkStudent(){}

NetworkStudent::NetworkStudent(string sID, string fName, string lName, string e, int a, int* numDays, Degree deg):Student(sID, fName, lName, e, a, numDays) {
    this->degree = deg;
}

Degree NetworkStudent::getDegree() {
    return degree;
}

void NetworkStudent::print() {
    cout << "First Name: " << getFirstName() << "\t" << "Last Name: " << getLastName() << "\t" << "Age: " << getAge() << "\t"
        << "Number of Days in Courses: { " << getNumDays()[0] << ", " << getNumDays()[1] << ", " << getNumDays()[2] << " } " << endl;
       cout << "Degree Program: Networking" << endl;

}