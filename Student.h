#pragma once
#include"Degree.h"
#include<iostream>
#include<string>

using namespace std;

class Student
{
public:
	//constructor
	Student();
	Student(string sID, string fName, string lName, string e, int a, int* numDays) {}
	//Setters
	void setStudentID(string sID);
	void setFirstName(string fName);
	void setLastName(string lName);
	void setEmail(string e);
	void setAge(int a);
	void setNumDays(int d1, int d2, int d3);
	void setDegreeType(string degree);

	//Getters
	string getStudentID();
	string getFirstName();
	string getLastName();
	string getEmail();

	int getAge();
	int getNumDays();

	virtual void print();
	virtual Degree getDegreeType();

	//Deconstructor
	~Student();

private:
	//variables
	string studentID;
	string firstName;
	string lastName;
	string email;
	int age = 0;
	int numDays[3] = { 0, 0, 0};
	string degree;

};

