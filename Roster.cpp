#include"Degree.h"
#include"Roster.h"
#include"NetworkStudent.h"
#include"SecurityStudent.h"
#include"SoftwareStudent.h"
#include<iostream>
#include<string>
#include<vector>
#include<sstream>


using namespace std;

Roster::Roster() {}

//Deconstructor
Roster::~Roster() {}

//Updateing the class roster array
void Roster::add(string sID, string fName, string lName, string e, int a, int day0, int day1, int day2, Degree degree) {
    int numDaysIn[] = { day0, day1, day2 };
    if (degree == Degree::NETWORKING) {
        classRosterArray[addIndex++] = new NetworkStudent(sID, fName, lName, e, a, numDaysIn, degree);
    }
    if (degree == Degree::SOFTWARE) {
        classRosterArray[addIndex++] = new SoftwareStudent(sID, fName, lName, e, a, numDaysIn, degree);
    }
    if (degree == Degree::SECURITY) {
        classRosterArray[addIndex++] = new SecurityStudent(sID, fName, lName, e, a, numDaysIn, degree);
    }
}

//printing the entire clas sroster
void Roster::printAll() {
    cout << "Class Roster:" << endl;
    cout << endl;
    for (int i = 0; i < 5; i++) {
       (classRosterArray[i])->print();
       cout << endl;
    }
    cout << endl;
}

//printing the average days to complete 3 courses
//void Roster::printnumDays() {
//    for (int i = 0; i < 5; i++) {
//        int avg = 0;
//       avg = ((classRosterArray[i])->getNumDays()[0] + (classRosterArray[i])->getNumDays()[1] + (classRosterArray[i])->getNumDays()[2]) / 3;
//        cout << "The average number of days it took the student with Student ID #: " << (classRosterArray[i])->getStudentID() <<
//        " to finish their coursework was " << avg << endl;      
//        cout << endl;
//    }
//}

//printing the average days to complete 3 courses
void Roster::printnumDays(string aID) {
    for (int i = 0; i < 5; i++) {
        int avg = 0;
        if (aID == classRosterArray[i]->getStudentID()) {
            avg = ((classRosterArray[i])->getNumDays()[0] + (classRosterArray[i])->getNumDays()[1] + (classRosterArray[i])->getNumDays()[2]) / 3;
            cout << "The average number of days it took the student with Student ID #: " << (classRosterArray[i])->getStudentID() <<
                " to finish their coursework was " << avg << endl;
            cout << endl;
        }
    }
}

//Printing students by degree program
void Roster::printByDegree(string degree) {
    Degree degreeType = Degree::SOFTWARE;
    if (degree == "NETWORKING") {
        degreeType = Degree::NETWORKING;
        cout << "Displaying students in the Netwroking degree program: " << endl;
        cout << endl;
        for (int i = 0; i < 5; i++) {
            if (degreeType == (classRosterArray[i])->getDegree()) {
                (classRosterArray[i])->print();
            }
            else {
                continue;
            }
        }
        cout << endl;
    }
    if (degree == "SOFTWARE") {
        degreeType = Degree::SOFTWARE;
        cout << "Displaying students in the Software degree program: " << endl;
        cout << endl;
        for (int i = 0; i < 5; i++) {
            if (degreeType == (classRosterArray[i])->getDegree()) {
                (classRosterArray[i])->print();
            }
            else {
                continue;
            }
        }
        cout << endl;
    }
    if (degree == "SECURITY") {
        degreeType = Degree::SECURITY;
        cout << "Displaying students in the Security degree program: " << endl;
        cout << endl;
         for (int i = 0; i < 5; i++) {
            if (degreeType == (classRosterArray[i])->getDegree()) {
                (classRosterArray[i])->print();
            }
            else {
                continue;
            }
        }
        cout << endl;
    }
    cout << endl;

}

//Checking Emails for invalid entries
void Roster::printBadEmails() {
    cout << "Displaying invalid Emails:" << endl;
    cout << endl;
    for (int i = 0; i < 5; i++) {
        bool foundCharAt = false;
        bool foundCharPeriod = false;
        bool foundCharSpace = false;
        string email = "";
        email = (*classRosterArray[i]).getEmail();
        for (char& c : email) {
            if (c == '@') {
                foundCharAt = true;
            }
           if (c == '.') {
                foundCharPeriod = true;
            }
            if (c == ' ') {
                foundCharSpace = true;
            }
        }
        if (foundCharAt == false || foundCharPeriod == false || foundCharSpace == true) {
            cout << (*classRosterArray[i]).getEmail() << endl;
            cout << endl;
        }
    }
}
//removing students from class roster array
void Roster::remove(string id) {
    bool removed = false;
        for (int i = 0; i < 5; i++) {
            string getID = classRosterArray[i]->getStudentID();
            if (classRosterArray[i] != NULL) {

                if (id == getID) {
                    classRosterArray[i] = NULL;
                    //delete classRosterArray[i];
                    removed = true;
                }
            }
        }
        if (removed == true) {
            cout << "The student with student ID #: " << id << " was not found." << endl;
        }
        //else {
            //cout << "The student with student ID #: " << id << " was not found." << endl;
        //}
}

int main() {

    //Student Data
    const string studentData[] = {
    "A1,John,Smith,John1989@gm ail.com,20,30,35,40,NETWORKING",
    "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORKING",
    "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
    "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
    "A5,Amber,Keech,akeech1@wgu.edu,30,30,33,40,SOFTWARE"
    };

    //Class Roster Instance
    Roster *classRoster=new Roster();

    //Degree Instance
    Degree myDegree = Degree::SECURITY;

    //adding students to the class roster array
    for (int i = 0; i < 5; i++) {
        stringstream ss(studentData[i]);
        vector <string> result;

        while (ss.good()) {
            string substr;
            getline(ss, substr, ',');
            result.push_back(substr);
        }
        if (result[8] == "NETWORKING") {
            myDegree = Degree::NETWORKING;
        }
        if (result[8] == "SECURITY") {
            myDegree = Degree::SECURITY;
        }
        if (result[8] == "SOFTWARE") {
            myDegree = Degree::SOFTWARE;
        }
        classRoster->add(result[0], result[1], result[2], result[3], stoi(result[4]), stoi(result[5]), stoi(result[6]), stoi(result[7]), myDegree);
    }

//Print personal information
    cout << "Scripting and Programming - Applications C867" << endl;
    cout << "C++" << endl;
    cout << "Student ID: #000938334" << endl;
    cout << "Amber Keech" << endl;
    cout << endl;

//printing all requirments
    classRoster->printAll();
    classRoster->printBadEmails();
    classRoster->printnumDays("A1");
    classRoster->printnumDays("A2");
    classRoster->printnumDays("A3");
    classRoster->printnumDays("A4");
    classRoster->printnumDays("A5");
    classRoster->printByDegree("SOFTWARE");
    classRoster->remove("A3");
    classRoster->remove("A3");

    }

