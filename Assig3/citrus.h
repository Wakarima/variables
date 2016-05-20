#ifndef CITRUS_H
#define CITRUS_H

#include <char>
#include <float>

class CitrusFruit{
protected:
  float ph;
public:
    
  CitrusFruit(std::char name, std::float ph) :
  name (name), ph(ph){}
  
   const char * getName():
   float getPh();
   
   
};
#endif