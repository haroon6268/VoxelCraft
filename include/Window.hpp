#pragma once

#include <GLFW/glfw3.h>
#include "camera.hpp"

class Window{ 

  public:
    Window(float width, float height, Camera &camera);
    bool shouldClose();
    void pollEvents();
    void swapBuffers();
    void processInput(float dt);
    int width;
    int height;
    ~Window();

  private:
    static void frame_buffer_callback(GLFWwindow* window, int width, int height);
    static void mouse_callback(GLFWwindow* window, double xpos, double ypos); 
    void Init();
    GLFWwindow* window;
    Camera &camera; 
};
