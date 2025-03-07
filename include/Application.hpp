#pragma once
#include "Renderer.hpp"
#include "Window.hpp"

class Application{

  public:
    Application();
    void Run();
  private:
    int height;
    int width;
    Window window; 
    Renderer renderer; 
    Camera camera;
};
