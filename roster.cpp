//
#include "student.h"
#include "networkStudent.h"
#include "securityStudent.h"
#include "softwareStudent.h"
#include <iostream>

using namespace std;

Roster::Roster(){}

//Updating the classRosterArray
void Roster::add(char sID, string fName, string lName, string eAddress, int a, int day0, int day1, int day2, Degree degree)
    int setNumDays[] = {day0, day1. day2};
    if(Degree::NETWORKING){
            classRosterArray[i++] = new NetworkStudent(sID, fName, lName, eAddress, a, setNumDays, degree)
    }
    }
}


classRosterArray[];

NetworkStudent netStudent;
SecurityStudent secStudent;
SoftwareStudent softStudent;





