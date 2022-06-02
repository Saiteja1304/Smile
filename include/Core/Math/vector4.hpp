#ifndef VECTOR4_HPP
#define VECTOR4_HPP

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
};

#endif