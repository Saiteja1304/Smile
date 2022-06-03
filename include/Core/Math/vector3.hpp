#ifndef VECTOR3_HPP
#define VECTOR3_HPP

#include "vector2.hpp"
struct vector3 {
  union {
    float x, r;
  };
  union {
    float g, y;
  };
  union {
    float b, z;
  };
  vector3() {}
  vector3(float val) { x = y = z = val; }
  vector3(float _x, float _y, float _z) {
    x = _x;
    y = _y;
    z = _z;
  }
  vector3(vector2 _vec2, float val) {
    x = _vec2.x;
    y = _vec2.y;
    z = val;
  }
  vector3(float val, vector2 _vec2) {
    x = val;
    y = _vec2.x;
    z = _vec2.y;
  }
};

#endif