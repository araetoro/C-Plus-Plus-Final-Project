#pragma once
#include "Student.h"

class SoftwareStudent : public Student {
public:
	//SoftwareStudent();
	SoftwareStudent(string sID, string fName, string lName, string e, int a, int* numDays, Degree);
	Degree getDegree() override;
	void print() override;

private:
	Degree degree;


};