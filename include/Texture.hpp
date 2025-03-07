#pragma once
#include <string>
#include <glad/glad.h>
class Texture{

  public:
    Texture(std::string filePath);
    void bindTexture();
    void setActiveTexture(GLenum activeTexNumber);

  private:
    unsigned int texture;
};
