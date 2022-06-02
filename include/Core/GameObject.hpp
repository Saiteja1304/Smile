#ifndef GAMEOBJECT_HPP
#define GAMEOBJECT_HPP

#include "Component.hpp"
#include "MeshRenderer.hpp"
#include "Shader.hpp"
struct GameObject {
  MeshRenderer meshrenderer;
  Shader shader;
  Component components[2];
};

#endif