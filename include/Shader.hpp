#pragma once

#include <glm/glm.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <string>
class Shader{

  public:
    Shader(const char* vertexPath, const char* fragmentPath); 
    void use();
    void setMat4f(const std::string &loc, const glm::mat4 &val); 
    void setTexture(unsigned int textureNumber);

  private:
    enum ShaderType{VERTEX, FRAGMENT};
    unsigned int ID;
    void checkCompilation(unsigned int shader, ShaderType type);
    void checkLink();

};
