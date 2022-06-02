#ifndef SHADER_HPP
#define SHADER_HPP

#include "Component.hpp"
struct Shader : Component {
  unsigned int vertex, fragment, program;
};

#endif