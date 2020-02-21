#include "NetworkStudent.h"
#include <iostream>

NetworkStudent::NetworkStudent() {}

NetworkStudent::NetworkStudent(string sID, string fName, string lName, string e, int a, int* numDays, Degree deg):Student(sID, fName, lName, e, a, numDays) {
    degree = deg;
}

Degree NetworkStudent::getDegree() {
    return degree;
}

void NetworkStudent::print() {
    cout << "First Name: " << getFirstName() << endl;
    cout << "Last Name: " << getLastName() << endl;
    cout << "Age: " << getAge() << endl;
    cout << "Number of Days in Courses: " << getNumDays() << endl;
    cout << "Degree Program: Networking" << endl;

}