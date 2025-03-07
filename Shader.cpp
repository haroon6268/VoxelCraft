#include <sstream>
#include <glad/glad.h>
#include <iostream>
#include "Shader.hpp"
#include <fstream>


Shader::Shader(const char* vertexPath, const char* fragmentPath){
    std::string vertexCode;
    std::string fragmentCode;
    std::ifstream vShaderFile;
    std::ifstream fShaderFile;
    vShaderFile.exceptions(std::ifstream::failbit | std::ifstream::badbit); 
    fShaderFile.exceptions(std::ifstream::failbit | std::ifstream::badbit);

    try{

        vShaderFile.open(vertexPath);
        fShaderFile.open(fragmentPath);

        std::stringstream vShaderStream, fShaderStream;
        vShaderStream << vShaderFile.rdbuf();
        fShaderStream << fShaderFile.rdbuf();
        vertexCode = vShaderStream.str();
        fragmentCode = fShaderStream.str();

        vShaderFile.close();
        fShaderFile.close();



    }catch(std::ifstream::failure e){
        std::cout << "ERROR:: " << e.what() << "\n";
    }

    const char* vShader = vertexCode.c_str();
    const char* fShader = fragmentCode.c_str();

    unsigned int vertex, fragment;

    vertex = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(vertex, 1, &vShader, NULL);
    glCompileShader(vertex);
    checkCompilation(vertex, VERTEX);

    fragment = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(fragment, 1, &fShader, NULL);
    glCompileShader(fragment);
    checkCompilation(fragment, FRAGMENT);
    
    ID = glCreateProgram();
    glAttachShader(ID, vertex);
    glAttachShader(ID, fragment);
    glLinkProgram(ID);
    checkLink();

    glDeleteShader(vertex);
    glDeleteShader(fragment);
    

}

void Shader::checkCompilation(unsigned int shader, ShaderType type){
    int success;
    char infoLog[512];

    glGetShaderiv(shader, GL_COMPILE_STATUS, &success); 
    if(!success){
        glGetShaderInfoLog(shader, 512, NULL, infoLog);
        std::cout << "ERROR::SHADER::" << (type == VERTEX ? "VERTEX" : "FRAGMENT") <<"::COMPILATION_FAILED\n" << infoLog << std::endl;
    }
}

void Shader::checkLink(){
    int success; 
    char infoLog[512]; 
    glGetProgramiv(ID, GL_LINK_STATUS, &success);
    if(!success){
      glGetProgramInfoLog(ID, 512, NULL, infoLog);
      std::cout << "ERROR: Shader Program Linking Failed\n" << infoLog << std::endl;
    }

}

void Shader::use(){
    glUseProgram(ID);
}

void Shader::setMat4f(const std::string &loc, const glm::mat4 &val){
    glUniformMatrix4fv(glGetUniformLocation(ID, loc.c_str()), 1, GL_FALSE, glm::value_ptr(val));
}

void Shader::setTexture(unsigned int textureNumber){
    glUniform1i(glGetUniformLocation(ID, "inTexture"), textureNumber);
}
