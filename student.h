#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
  std::string name;
  std::string id;
public:
  Student(std::string name, std::string id) :
    name(name), id(id){}
    
  std::string getName();
  
  std::string getId();
  //!TODO Write the getId() method
};
#endif