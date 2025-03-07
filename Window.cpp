#include <glad/glad.h>
#include "Window.hpp"
#include <iostream>
#include "camera.hpp"

#define SPEED 25.0f

//This is bad practice but screw it since I won't define it again
float lastMouseXOffset;
float lastMouseYOffset;



Window::Window(float width, float height, Camera &camera) : width(width), height(height), camera(camera){
    Init();
    glfwSetWindowUserPointer(window, this);
    lastMouseYOffset = height / 2;
    lastMouseXOffset = width / 2;
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
    glfwSetCursorPosCallback(window, mouse_callback);
    glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);
    glEnable(GL_DEPTH_TEST);
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

void Window::processInput(float dt){
    float cameraSpeed = SPEED * dt;    

    if(glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS){
        camera.pos += cameraSpeed * camera.front;
    } 
    if(glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS){
        camera.pos -= cameraSpeed * camera.front;
    }
    if(glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS){
        camera.pos -= glm::normalize(glm::cross(camera.front, camera.up)) * cameraSpeed;
    }
    if(glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS){
        camera.pos += glm::normalize(glm::cross(camera.front, camera.up)) * cameraSpeed;
    }
    if(glfwGetKey(window, GLFW_KEY_SPACE) == GLFW_PRESS){
        camera.pos += camera.up * cameraSpeed;
    }
    if(glfwGetKey(window, GLFW_KEY_LEFT_SHIFT) == GLFW_PRESS){
        camera.pos -= camera.up * cameraSpeed;
    }

}

bool firstMouse = true;
void Window::mouse_callback(GLFWwindow* window, double xpos, double ypos){
    if(firstMouse){
        lastMouseXOffset = xpos;
        lastMouseYOffset = ypos;
        firstMouse = false;
    }
    //ToDo, multiply delta time by sensitivity. Set it in user pointer
    
    Window* curWindow = (Window*)glfwGetWindowUserPointer(window); 
    float xoffset = xpos - lastMouseXOffset;
    float yoffset = lastMouseYOffset - ypos; 
    
    lastMouseYOffset = ypos;
    lastMouseXOffset = xpos;
    
    curWindow->camera.processMouseInput(xoffset, yoffset);

    
}

Window::~Window(){
    glfwTerminate();
}

