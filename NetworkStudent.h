#pragma once
#include "Student.h"

class NetworkStudent : public Student {
public:
	//NetworkStudent();
	NetworkStudent(string sID, string fName, string lName, string e, int a, int* numDays, Degree);
	Degree getDegree() override;
	void print() override;

private:
	Degree degree;
	

};
