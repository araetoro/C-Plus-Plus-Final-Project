#pragma once
#include"Student.h"
#include<iostream>
#include <array>

class Roster
{
public:
	Roster();
	void printAll();
	void add(string sID, string fName, string lName, string e, int a, int day0, int day1, int day2, Degree degree);
	int addIndex = 0;
	void remove(string id);
	void printByDegree(string degree);
	void printnumDays(string aID);
	void printBadEmails();

	~Roster();

private:
	Student* classRosterArray[5] = {};
	Degree myDegree = Degree::NETWORKING;
	
};

