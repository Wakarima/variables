#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include <string>

#include "student.h"

class University {
  std::string name;
  Student *stud;
public:
  University(std::string name, Student *stud)
    : name(name), stud(stud) {}
  University(Student *stud = NULL)
    : University("Strathmore University", stud) {}
    
    std::string getName();
    
    std::string getAllStudents();
  //!TODO Write a method getAllStudents() that prints the
  // Name of the University and all the students at the
  // university
  //!TODO Write a method that yields the name of the
  // university
};
#endif