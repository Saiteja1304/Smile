#ifndef GAMEOBJECT_HPP
#define GAMEOBJECT_HPP

#include "Components/Component.hpp"
#include "Components/MeshRenderer.hpp"
#include "Components/Shader.hpp"
struct GameObject {
  MeshRenderer meshrenderer;
  Shader shader;
  Component components[2];
};

#endif