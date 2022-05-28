#ifndef WINDOW_HPP

#define WINDOW_HPP

// GLFW Header
#include <GLFW/glfw3.h>

class Window {
public:
  GLFWwindow *WHandle;
  static Window *WInstance;
  bool WIsRunning = true;
  static Window *WGetInstance() {
    if (!WInstance)
      WInstance = new Window;
    return WInstance;
  }
  int WInitGLFW();
  bool WCreateWindow();
  void WSetContext();
  void WGetWindowSize(int &width, int &height);
  void WSetWindowSize(int &width, int &height);
  void WUpdate();
  void WDestroyWindow();
  void WExitGLFW();

private:
  Window();
  ~Window();
};

#endif