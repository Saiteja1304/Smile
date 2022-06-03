// glad header
#include <glad/glad.h>

// other headers
#include "Core/GameObject.hpp"
#include <Core/Components/MeshRenderer.hpp>
#include <Core/Components/Shader.hpp>
void loadMeshTOMemory(const char *MeshName, Mesh &mesh,
                      MeshRenderer &meshrenderer) {}
void loadMeshTOMemory(Mesh &mesh, MeshRenderer &meshrenderer) {
  glGenVertexArrays(1, &meshrenderer.vertexArrayObject);
  glBindVertexArray(meshrenderer.vertexArrayObject);

  glBindBuffer(GL_ARRAY_BUFFER, meshrenderer.vertexBufferObject);
  glBufferData(GL_ARRAY_BUFFER, mesh.vertexDataSize * sizeof(float),
               mesh.vertexData, GL_STATIC_DRAW);
  glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void *)0);
  glEnableVertexAttribArray(0);
  glGenBuffers(1, &meshrenderer.indexBufferObject);
  glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, meshrenderer.indexBufferObject);
  glBufferData(GL_ELEMENT_ARRAY_BUFFER, mesh.faceDataSize * sizeof(int), mesh.faceData, GL_STATIC_DRAW);

  glBindVertexArray(0);
}
void loadShader(Shader& shader){

}