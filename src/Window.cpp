#include "GLFW/glfw3.h"
#include <Window/Window.hpp>

// DEBUG
#include <Debug/Debug.hpp>

// std
#include <iostream>

int Window::WInitGLFW() {
  int GLFWResult = glfwInit();

  DEBUG(if (!GLFWResult) std::cerr << "[Error] [GLFW] Failed to init glfw\n";
        return GLFWResult;)

  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
  glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

  return GLFWResult;
}
bool Window::WCreateWindow() {
  WHandle = glfwCreateWindow(1200, 800, "Smile Editor", NULL, NULL);
  DEBUG(if (WHandle == NULL) std::cerr
            << "[Error] [Window] Failed to create Window\n";
        return false; else return true;)

  // this function always returns true in release build
  // for debugging use debug mode
  return true;
}
void Window::WGetWindowSize(int &width, int &height) {
  glfwGetWindowSize(WHandle, &width, &height);
}
void Window::WSetWindowSize(int &width, int &height) {
  glfwSetWindowSize(WHandle, width, height);
}
void Window::WSetContext() { glfwMakeContextCurrent(WHandle); }
void Window::WUpdate() { WIsRunning = !glfwWindowShouldClose(WHandle); }
void Window::WSwapBuffers() { glfwSwapBuffers(WHandle); }
void Window::WPollEvents() { glfwPollEvents(); }
void Window::WDestroyWindow() { glfwDestroyWindow(WHandle); }
void Window::WExitGLFW() { glfwTerminate(); }