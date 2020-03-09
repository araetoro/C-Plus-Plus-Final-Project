#include "Student.h"
#include<iostream>

using namespace std;

//constructors
Student::Student() {}
Student::Student(string sID, string fName, string lName, string e, int a, int* nmDays) {
	this->studentID = sID;
	this->firstName = fName;
	this->lastName = lName;
	this->email = e;
	this->age = a;
	this->numDays[0] = nmDays[0];
	this->numDays[1] = nmDays[1];
	this->numDays[2] = nmDays[2];
}
//Setters
void Student::setStudentID(string sID) {
	studentID = sID;
}
void Student::setFirstName(string fName) {
	firstName = fName;
}
void Student::setLastName(string lName) {
	lastName = lName;
}
void Student::setEmail(string e) {
	email = e;
}
void Student::setAge(int a) {
	age = a;
}
void Student::setNumDays(int d1, int d2, int d3) {
	numDays[0] = d1;
	numDays[1] = d2;
	numDays[2] = d3;
}

//Getters
string Student::getStudentID() {
	return studentID;
}
string Student::getFirstName() {
	return firstName;
}
string Student::getLastName() {
	return lastName;
}
string Student::getEmail() {
	return email;
}
int Student::getAge() {
	return age;
}
int *Student::getNumDays() {
	return numDays;

}

void Student::print(){}



//Deconstructor
Student::~Student() {}