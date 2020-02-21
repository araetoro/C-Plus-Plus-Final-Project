#pragma once
#include"Student.h"
#include<iostream>

class Roster
{
public:
	Roster();
	virtual ~Roster();
	void printAll();
	void add(string sID, string fName, string lName, string e, int a, int day0, int day1, int day2, Degree degree);
	int addIndex = 0;

private:
	Student *classRosterArray[5];
};

