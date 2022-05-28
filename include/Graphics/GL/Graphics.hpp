#ifndef GRAPHICS_HPP
#define GRAPHICS_HPP

class Graphics {
public:
  static Graphics *GInstance;
  static Graphics *GGetInstance() {
    if (!GInstance)
      GInstance = new Graphics;
    return GInstance;
  }
  int GInit();
  void GSetViewPort(int& xPos, int& yPos, int &width, int& height);
  void GBackGroundColor(float red, float green, float blue, float alpha);

private:
  Graphics() {}
  ~Graphics() {}
};
#endif