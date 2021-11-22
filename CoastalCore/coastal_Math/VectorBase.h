/*
Vector base class for coastal math.
*/
#ifndef KVECTOR_H
#define KVECTOR_H

class VectorBase
{
public:
  virtual void printVec() = 0;

  virtual float magnitude() = 0;

  virtual void normal() = 0;

  virtual void toString() = 0;
};

#endif
