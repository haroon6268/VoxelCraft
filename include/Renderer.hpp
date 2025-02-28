#pragma once
#include "Shader.hpp"
class Renderer{
  public:
    Renderer();
    void render();
    unsigned int VBO;
    unsigned int VAO;
  private:
    void init();
    Shader blockShader; 
};

