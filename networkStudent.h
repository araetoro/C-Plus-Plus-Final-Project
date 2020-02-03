
#indef NETWORKSTUDENT_H
#define NETWORKSTUDENT_H
#include "student.h"

class NetworkStudent: public Student{

 public:
    NetworkStudent();
    NetworkStudent(char, string, string, string, int , int*, Degree);
    Degree getDegree();

 private:
    Degree degree;

};

#end if//NETWORKSTUDENT_H

