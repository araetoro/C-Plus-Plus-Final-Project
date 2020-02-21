#include"Student.h"
#include "Roster.h"
#include "NetworkStudent.h"
//#include"SecurityStudent.h"
//#include"SoftwareStudent.h"
#include<iostream>
#include<string>
#include<vector>
#include<sstream>


using namespace std;

int i = 0;

Roster::Roster() {}
void Roster::add(string sID, string fName, string lName, string e, int a, int day0, int day1, int day2, Degree degree) {
    int numDays[] = { day0, day1, day2 };
    if (degree == Degree::NETWORKING) {
        classRosterArray[addIndex++] = new NetworkStudent(sID, fName, lName, e, a, numDays, degree);
    }
    //ad other students once working
}

void Roster::printAll() {
    cout << "Displaying roster:" << endl;
    for (int i = 0; i < 5;) {
        (*classRosterArray[i]).print();
    }
}

int main() {
    Roster classRoster;
    Degree myDegree;

    //Student Data
    string studentData[] = {
    "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
    "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
    "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
    "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
    "A5,Amber,Keech,akeech1@wgu.edu,19,30,33,40,NETWORK"
    };
    string* ptr[5];

    for (int i = 0; i < 5; i++) {
        ptr[i] = &studentData[i]; // assign the address of integer.
    }

    for (int i = 0; i < 5; i++) {
        cout << "Value of studentData[" << i << "] = ";
        cout << *ptr[i] << endl;
    }

    for (int i = 0; i < 5; i++) {
        string my_str = studentData[i];
        vector<string> result;
        stringstream s_stream(my_str);
        while (s_stream.good()) {
            string substr;
            getline(s_stream, substr, ',');
            result.push_back(substr);
        }
        if (result[8] == "NETWORKING") {
            myDegree = Degree::NETWORKING;
        }
      
      
        classRoster.add(result[0], result[1], result[2], result[3], stoi(result[4]), stoi(result[5]),
            stoi(result[6]), stoi(result[7]), myDegree);
        }
   

    return 0;
}