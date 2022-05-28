#include <glad/glad.h>
#include <Graphics/GL/Graphics.hpp>
int Graphics::GInit(){
    return gladLoadGL();
}
void Graphics::GSetViewPort(int xPos, int yPos, int width, int height){
    glViewport(xPos, yPos, width, height);
}
void Graphics::GBackGroundColor(float red, float green, float blue, float alpha){
    glClearColor(red, green, blue, alpha);
    glClear(GL_COLOR_BUFFER_BIT);
}