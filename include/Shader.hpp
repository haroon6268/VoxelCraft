#pragma once

#include <glm/glm.hpp>
#include <glm/gtc/type_ptr.hpp>

class Shader{

  public:
    Shader(const char* vertexPath, const char* fragmentPath); 
    void use();
  private:
    enum ShaderType{VERTEX, FRAGMENT};
    unsigned int ID;
    void checkCompilation(unsigned int shader, ShaderType type);
    void checkLink();
    

};
