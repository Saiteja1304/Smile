#ifndef VECTOR4_HPP
#define VECTOR4_HPP

#include "Core/Math/vector2.hpp"
#include "Core/Math/vector3.hpp"
struct vector4 {
  union {
    float r, x;
  };
  union {
    float g, y;
  };
  union {
    float b, z;
  };
  union {
    float a, w;
  };
  vector4() {}
  vector4(float val) { x = y = z = w = val; }
  vector4(float _x, float _y, float _z, float _w) {
    x = _x;
    y = _y;
    z = _z;
    w = _w;
  }
  vector4(vector2 _first, vector2 _second) {
    x = _first.x;
    y = _first.y;
    z = _second.x;
    w = _second.y;
  }
  vector4(vector3 vec3, float val) {
    x = vec3.x;
    y = vec3.y;
    z = vec3.z;
    w = val;
  }
  vector4(float val, vector3 vec3) {
    x = val;
    y = vec3.x;
    z = vec3.y;
    w = vec3.z;
  }
};

#endif