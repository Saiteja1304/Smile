#ifndef MESHRENDERER_HPP
#define MESHRENDERER_HPP

#include "Component.hpp"
template <unsigned short int vertexSize, unsigned short int faceSize>
struct Mesh : Component {
  bool is_vt, is_vn;
  float *vertexData;
  int *faceData;
};
struct MeshRenderer : Component {
  unsigned int vertexArrayObject, vertexBufferObject, indexBufferObject;
};

#endif