#ifndef TRIA_H
#define TRIA_H


#include "shape.h"
#include <string>


class Triangle : public Shape{

    std::string shape;
    float base;
    float height;
    
    
    
 public:

 Triangle(std::string name = "Nice Triangle!") : Shape(name){}
Triangle(float base, float height) : base(0), height(0){}

float area(float base, float height);

    
};
#endif