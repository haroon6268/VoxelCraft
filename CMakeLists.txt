cmake_minimum_required(VERSION 3.0.0)
project(OpenGLRedo)
set(CMAKE_CXX_STANDARD 17)
find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)
find_package(glm CONFIG REQUIRED)

include_directories(${OPENGL_INCLUDE_DIR} ${GLFW_INCLUDE_DIR} ${CMAKE_SOURCE_DIR}/include)

add_executable(OpenGL main.cpp glad.c Application.cpp Window.cpp Renderer.cpp Shader.cpp camera.cpp Texture.cpp)

target_link_libraries(OpenGL glfw ${OPENGL_LIBRARIES} glm::glm)



