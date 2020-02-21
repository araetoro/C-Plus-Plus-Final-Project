#pragma once
#include "Student.h"
#include"Degree.h"
#include<iostream>

class NetworkStudent : public Student {
public:
	NetworkStudent();
	NetworkStudent(string sID, string fName, string lName, string e, int a, int* numDays, Degree);
	Degree getDegree();
	void print();

private:
	Degree degree;
	

};