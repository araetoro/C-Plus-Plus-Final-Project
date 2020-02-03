
#include <iostream>
#include <string>
using namespace std;

#include "student.h"

Student::Student(){}

Student::Student(char sID, string fName, string lName, string eAddress, int a, int* numDays ){

}

int Student::getStudentID() {
    return studentID;
}
void Student::setStudentID(char sID){
    studentID = sID;
}

string Student:: getFirstName() {
    return firstName;
}
void Student::setFirstName(string fName){
    firstName = fName;
}

string Student::getLastName() {
    return lastName;
}
void Student::setLastName(string lName){
    lastName = lName;
}

string Student::getEmailAddress() {
    return emailAddress;
}
void Student::setEmailAddress(string eAddress){
    emailAddress = eAddress;
}

int Student::getAge() {
    return age;
}
void Student::setAge(int a){
    age = a;
}

int Student::getDaysToComplete() {
    return daysToCompelte;
}
void Student::setDaysToComplete(int day0, int day1, int day2){
    Student::numDays[0] = day0;
    Student::numDays[1] = day 1;
    Student::numDays[2] = day2;
}

Degree Student::getDegreeTypes() {
    return degreeTypes;
}

virtual print();
virtual Degree getDegree();

~Student();
