#include <glad/glad.h>
#include <Graphics/GL/Graphics.hpp>
int Graphics::GInit(){
    return gladLoadGL();
}
void Graphics::GSetViewPort(ivector2 startPos, ivector2 size){
    glViewport(startPos.x, startPos.y, size.x, size.y);
}
void Graphics::GBackGroundColor(vector4 _backgroundcolor){
    glClearColor(_backgroundcolor.x, _backgroundcolor.y, _backgroundcolor.z, _backgroundcolor.w);
    glClear(GL_COLOR_BUFFER_BIT);
}