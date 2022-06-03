#ifndef GRAPHICS_HPP
#define GRAPHICS_HPP

#include "Core/Math/vector2.hpp"
#include "Core/Math/vector4.hpp"
class Graphics {
public:
  vector4 G_BGColor = vector4(1.0);
  static Graphics &GGetInstance() {
    static Graphics GInstance;
    return GInstance;
  }
  int GInit();
  void GSetViewPort(ivector2 startPos, ivector2 size);
  void GBackGroundColor(vector4 _backgroundcolor);

private:
  Graphics() {}
  Graphics(Graphics const &);
  void operator=(Graphics const &);

public:
  // Graphics(Graphics const &) = delete;
  // void operator=(Graphics const &) = delete;
};
#endif