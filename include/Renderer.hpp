#pragma once
#include "Shader.hpp"
#include "camera.hpp"
#include "Texture.hpp"
class Renderer{
  public:
    Renderer(Camera &camera);
    void render();
    unsigned int VBO;
    unsigned int VAO;
  private:
    void init();
    Shader blockShader; 
    Camera &camera;
    Texture blockTexture;
};

