#ifndef SHAPE_H
#define SHAPE_H

#include <string>


class Shape{

 protected:

 std::string name;
 float height;
 float base;

 public:

 Shape(std::string name = "Amorphous Base Shape"): name(name){}
 Shape(float height, float base) : height(0), base (0){};



 std::string getName();

 };
#endif