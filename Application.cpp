#define GL_SILENCE_DEPRECATION
#include "Application.hpp"
#define WINDOW_HEIGHT 720.0F
#define WINDOW_WIDTH 1080.0F

glm::vec3 pos = glm::vec3(0.0f, 0.0f, 3.0f);
glm::vec3 up = glm::vec3(0.0f, 1.0f, 0.0f);
glm::vec3 front = glm::vec3(0.0f, 0.0f, -1.0f);



Application::Application() : camera(pos,front,up), height(WINDOW_HEIGHT), width(WINDOW_WIDTH), window(WINDOW_HEIGHT, WINDOW_WIDTH, camera), renderer(camera){

    
}

void Application::Run(){
    float deltaTime = 0.0f;
    float lastFrame = 0.0f;
    float currentFrame;
    while(!window.shouldClose()){
        currentFrame = glfwGetTime(); 
        deltaTime = currentFrame - lastFrame;
        lastFrame = currentFrame;
        window.processInput(deltaTime);        
        glClearColor(0.1f, 0.31f, 0.54f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        
        
        renderer.render();
        window.pollEvents();
        window.swapBuffers();
    }
}

