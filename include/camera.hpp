#pragma once
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

class Camera{
 public:
   Camera(glm::vec3 pos, glm::vec3 front, glm::vec3 up);
   glm::vec3 pos;
   glm::vec3 front;
   glm::vec3 up;
   float pitch = 0.0f;
   float yaw = -90.0f;
   glm::mat4 getLookat(); 
   void processMouseInput(float xOffset, float yOffset); 
 private:
};
