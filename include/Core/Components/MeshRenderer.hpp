#ifndef MESHRENDERER_HPP
#define MESHRENDERER_HPP

#include "Component.hpp"
struct Mesh : Component {
  bool is_vt, is_vn;
  unsigned short int vertexDataSize, faceDataSize;
  float *vertexData;
  int *faceData;
  Mesh() {}
  Mesh(bool _is_vt, bool _is_vn, unsigned short int _vertexDataSize,
       unsigned short int _faceDataSize) {
    is_vt = _is_vt;
    is_vn = _is_vn;
    vertexData = new float[_vertexDataSize];
    faceData = new int[_faceDataSize];
  }
};
struct MeshRenderer : Component {
  unsigned int vertexArrayObject, vertexBufferObject, indexBufferObject;
};

#endif