#include <glad/glad.h>
#include "Window.hpp"
#include <iostream>
Window::Window(int width, int height) : width(width), height(height){
    Init();
}

void Window::Init(){
    if(!glfwInit()){
        std::cout << "Initalizing GLFW Failed\n";
        glfwTerminate();
    }

    //Settings window settings
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
   
    window = glfwCreateWindow(height, width, "Minecraft", NULL, NULL);
    if(!window){
        std::cout << "Window Creation Failed\n";
        glfwTerminate();
    }

    glfwMakeContextCurrent(window); 
    gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);
     

    glfwSetFramebufferSizeCallback(window, frame_buffer_callback);

    std::cout << "Window has successfully been initalized!\n";    
}


void Window::frame_buffer_callback(GLFWwindow* window, int width, int height){
    glViewport(0,0,width,height);
}

void Window::swapBuffers(){
    glfwSwapBuffers(window);
}

void Window::pollEvents(){
    glfwPollEvents();
}

bool Window::shouldClose(){
    return glfwWindowShouldClose(window);
}
Window::~Window(){
    glfwTerminate();
}
