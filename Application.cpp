#define GL_SILENCE_DEPRECATION
#include "Application.hpp"
#define WINDOW_HEIGHT 720.0F
#define WINDOW_WIDTH 1080.0F
Application::Application() : height(WINDOW_HEIGHT), width(WINDOW_WIDTH), window(WINDOW_HEIGHT, WINDOW_WIDTH), renderer(){

    
}

void Application::Run(){
    
    while(!window.shouldClose()){
        
        glClearColor(0.1f, 0.31f, 0.54f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
        
        renderer.render();
        window.pollEvents();
        window.swapBuffers();
    }
}

