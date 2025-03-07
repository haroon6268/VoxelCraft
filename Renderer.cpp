#include "Renderer.hpp"
#include <glad/glad.h>

float vertices[] = {
    // positions          // texture coords
    // Back face
    -0.5f, -0.5f, -0.5f,  0.0f, 0.0f, // bottom-left
     0.5f, -0.5f, -0.5f,  1.0f, 0.0f, // bottom-right    
     0.5f,  0.5f, -0.5f,  1.0f, 1.0f, // top-right              
     0.5f,  0.5f, -0.5f,  1.0f, 1.0f, // top-right
    -0.5f,  0.5f, -0.5f,  0.0f, 1.0f, // top-left
    -0.5f, -0.5f, -0.5f,  0.0f, 0.0f, // bottom-left
    // Front face
    -0.5f, -0.5f,  0.5f,  0.0f, 0.0f, // bottom-left
     0.5f, -0.5f,  0.5f,  1.0f, 0.0f, // bottom-right
     0.5f,  0.5f,  0.5f,  1.0f, 1.0f, // top-right
     0.5f,  0.5f,  0.5f,  1.0f, 1.0f, // top-right
    -0.5f,  0.5f,  0.5f,  0.0f, 1.0f, // top-left
    -0.5f, -0.5f,  0.5f,  0.0f, 0.0f, // bottom-left
    // Left face
    -0.5f,  0.5f,  0.5f,  1.0f, 0.0f, // top-right
    -0.5f,  0.5f, -0.5f,  0.0f, 0.0f, // top-left
    -0.5f, -0.5f, -0.5f,  0.0f, 1.0f, // bottom-left
    -0.5f, -0.5f, -0.5f,  0.0f, 1.0f, // bottom-left
    -0.5f, -0.5f,  0.5f,  1.0f, 1.0f, // bottom-right
    -0.5f,  0.5f,  0.5f,  1.0f, 0.0f, // top-right
    // Right face
     0.5f,  0.5f,  0.5f,  0.0f, 0.0f, // top-left
     0.5f,  0.5f, -0.5f,  1.0f, 0.0f, // top-right
     0.5f, -0.5f, -0.5f,  1.0f, 1.0f, // bottom-right
     0.5f, -0.5f, -0.5f,  1.0f, 1.0f, // bottom-right
     0.5f, -0.5f,  0.5f,  0.0f, 1.0f, // bottom-left
     0.5f,  0.5f,  0.5f,  0.0f, 0.0f, // top-left
    // Bottom face
    -0.5f, -0.5f, -0.5f,  0.0f, 1.0f, // top-left
     0.5f, -0.5f, -0.5f,  1.0f, 1.0f, // top-right
     0.5f, -0.5f,  0.5f,  1.0f, 0.0f, // bottom-right
     0.5f, -0.5f,  0.5f,  1.0f, 0.0f, // bottom-right
    -0.5f, -0.5f,  0.5f,  0.0f, 0.0f, // bottom-left
    -0.5f, -0.5f, -0.5f,  0.0f, 1.0f, // top-left
    // Top face
    -0.5f,  0.5f, -0.5f,  0.0f, 1.0f, // bottom-left
     0.5f,  0.5f, -0.5f,  1.0f, 1.0f, // bottom-right
     0.5f,  0.5f,  0.5f,  1.0f, 0.0f, // top-right
     0.5f,  0.5f,  0.5f,  1.0f, 0.0f, // top-right
    -0.5f,  0.5f,  0.5f,  0.0f, 0.0f, // top-left
    -0.5f,  0.5f, -0.5f,  0.0f, 1.0f, // bottom-left
};


Renderer::Renderer(Camera &camera) :   blockShader("../shaders/vshader.txt", "../shaders/fshader.txt"), VBO(0), VAO(0), camera(camera), blockTexture("../assets/log_oak.png"){
    init();
    
}

void Renderer::init(){
    blockShader.use();
    blockTexture.setActiveTexture(GL_TEXTURE1);
    blockShader.setTexture(1);
    glGenVertexArrays(1, &VAO); 
    glGenBuffers(1, &VBO);
    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
    glBindBuffer(GL_DRAW_BUFFER, 0);

    glBindVertexArray(VAO);
    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(float) * 5, (void*)0);
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, sizeof(float) * 5, (void*)(sizeof(float) * 3));
    glEnableVertexAttribArray(1);
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindVertexArray(0);
    
  
    
}

void Renderer::render(){
    blockShader.use();
    blockTexture.setActiveTexture(GL_TEXTURE1);
    blockShader.setTexture(1);
    glm::mat4 view = camera.getLookat();
    view = glm::translate(view, glm::vec3(0.0f, 0.0f, 3.0f));
    glm::mat4 projection = glm::perspective(glm::radians(45.0f), 1080.0f/720.0f, 0.1f, 100.0f);
    glm::mat4 model = glm::mat4(1.0f);
    model = glm::translate(model, glm::vec3(0.0f, 0.0f, -5.0f));
    blockShader.setMat4f("view", view);
    blockShader.setMat4f("projection", projection);
    blockShader.setMat4f("model", model);
    glBindVertexArray(VAO);
    glDrawArrays(GL_TRIANGLES, 0, 36);

}
