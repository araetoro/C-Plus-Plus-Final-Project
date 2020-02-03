

#ifndef ROSTER_H
#define ROSTER_H
#include "student.h"
#include <array>

class Roster{
public:
    Roster();
    void printAll();
    void add(char sID, string fName, string lName, string eAddress, int a, int* numDays);
private:
    Student *classRosterArray[5];
};

#endif //ROSTER_H
