#ifndef LEMON_H
#define LEMON_H

#include <char>
#include <float>

class Lemon : public CitrusFruit {
public:
  Lemon(float ph) : CitrusFruit(ph){}
   const char * getName();
  float getPh();
};
#endif