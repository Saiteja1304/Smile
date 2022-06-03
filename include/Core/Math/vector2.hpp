#ifndef VECTOr2_HPP
#define VECTOr2_HPP

struct vector2 {
  union {
    float x, r;
  };
  union {
    float y, g;;
  };
};
struct ivector2 {
  union {
    int x, r;
  };
  union {
    int y, g;
  };
};

#endif