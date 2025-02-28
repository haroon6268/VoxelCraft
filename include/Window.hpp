#pragma once

#include <GLFW/glfw3.h>

class Window{ 

  public:
    Window(int width, int height);
    bool shouldClose();
    void pollEvents();
    void swapBuffers();
    ~Window();

  private:
    static void frame_buffer_callback(GLFWwindow* window, int width, int height);
    void Init();
    GLFWwindow* window;
    int width;
    int height;
};
