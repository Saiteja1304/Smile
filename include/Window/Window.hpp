#ifndef WINDOW_HPP

#define WINDOW_HPP

// GLFW Header
#include <GLFW/glfw3.h>

class Window {
public:
  GLFWwindow *WHandle;
  static Window *WInstance;
  bool WIsRunning = true;
  bool WEnableKeyCallBack = false;
  static Window *WGetInstance() {
    if (!WInstance)
      WInstance = new Window;
    return WInstance;
  }
  virtual void KeyCallBack(GLFWwindow* window, int key, int scancode, int action, int mods);
  int WInitGLFW();
  bool WCreateWindow();
  void WSetContext();
  void WGetWindowSize(int &width, int &height);
  void WSetWindowSize(int &width, int &height);
  void WPollEvents();
  void WSwapBuffers();
  void WUpdate();
  void WExitWindow();
  void WDestroyWindow();
  void WExitGLFW();

private:
  Window(){}
  ~Window(){}
};

#endif