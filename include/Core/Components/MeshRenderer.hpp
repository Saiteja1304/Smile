#ifndef MESHRENDERER_HPP
#define MESHRENDERER_HPP

#include "Component.hpp"
struct Mesh : Component {
  bool is_vt, is_vn;
  unsigned short int vertexDataSize, faceDataSize;
  float *vertexData;
  int *faceData;
};
struct MeshRenderer : Component {
  unsigned int vertexArrayObject, vertexBufferObject, indexBufferObject;
};

#endif