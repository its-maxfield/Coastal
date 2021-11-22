#ifndef KVECTOR2_H
#define KVECTOR2_H

#include "kvector.h"

class Vector2 : public VectorBase
{
//X and Y values for coordinates
public:
  float x;
  float y;

public:
  //Constructors for all cases
  Vector2(float x, float y);
  Vector2(float x);
  Vector2();

  //Print for checking values
  void printVec();

  //Return string version if needed for any use.
  string toString();

  //Adds or subtracts another vector2.
  Vector2 operator+(const Vector2& toAdd);
  Vector2 operator-(const Vector2& toSub);

  //Multiplies or divides a vector by a scalar value.
  Vector2 operator*(const float val);
  Vector2 operator*(const Vector2& mult);
  Vector2 operator/(const float val);
  Vector2 operator/(const Vector2& div);

  void operator*=(const float val);
  void operator/=(const float val);
  void operator+=(const Vector2& toAdd);
  void operator-=(const Vector2& toSub);

  //Magnitude
  float magnitude();

  //Normalize
  void normal();

  //Square the initial components
  void squareVec();
  void sqrtVec();

private:
  void setX(float x);
  void setY(float y);
};

#endif
