#ifndef SHADER_HPP
#define SHADER_HPP

#include "Component.hpp"
struct Shader : Component {
  char vertexShaderName[16], fragementShaderName[16];
  unsigned int vertex, fragment, program;
};

#endif