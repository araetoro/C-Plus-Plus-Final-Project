#pragma once
#include "Student.h"

class SecurityStudent : public Student {
public:
	//SecurityStudent();
	SecurityStudent(string sID, string fName, string lName, string e, int a, int* numDays, Degree);
	Degree getDegree() override;
	void print() override;

private:
	Degree degree;


};