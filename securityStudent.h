
#indef SECURITYSTUDENT_H
#define SECURITYSTUDENT_H
#include "student.h"

class SecurityStudent: public Student{

 public:
    SecurityStudent();
    SecurityStudent(char, string, string, string, int , int*, Degree);
    Degree getDegree();

 private:
    Degree degree;

};

#end if//SECURITYSTUDENT_H
