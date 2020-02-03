
#indef SOFTWARESTUDENT_H
#define SOFTWARESTUDENT_H
#include "student.h"

class SoftwareStudent: public Student{

 public:
    SoftwareStudent();
    SoftwareStudent(char, string, string, string, int , int*, Degree);
    Degree getDegree();

 private:
    Degree degree;

};

#end if//SOFTWARESTUDENT_H

