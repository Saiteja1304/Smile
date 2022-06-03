#ifndef VECTOr2_HPP
#define VECTOr2_HPP

struct vector2 {
  union {
    float x, r;
  };
  union {
    float y, g;
  };
  vector2() {}
  vector2(float val) { x = y = val; }
  vector2(float _val_1, float _val_2) {
    x = _val_1;
    y = _val_2;
  }
};
struct ivector2 {
  union {
    int x, r;
  };
  union {
    int y, g;
  };
  ivector2() {}
  ivector2(int val) { x = y = val; }
  ivector2(int _val_1, int _val_2) {
    x = _val_1;
    y = _val_2;
  }
};

#endif