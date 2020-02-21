#include "Student.h"
#include<iostream>

using namespace std;

//constructors
Student::Student() {}
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
void Student::setDegreeType(string degreeType) {
	degree = degreeType;
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
int Student::getNumDays() {
	return	numDays[0];
	numDays[1];
	numDays[2];
}
Degree Student::getDegreeType() {
	return Degree::SOFTWARE;
}
void Student::print(){}



//Deconstructor
Student::~Student() {}