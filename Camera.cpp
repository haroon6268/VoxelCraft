#include "camera.hpp"

Camera::Camera(glm::vec3 pos, glm::vec3 front, glm::vec3 up) : pos(pos), front(front), up(up) {

}


glm::mat4 Camera::getLookat(){
    return glm::lookAt(pos, pos + front, up); 
}

void Camera::processMouseInput(float xOffset, float yOffset){
    
    float sens = 0.1f;
    
    xOffset *= sens;
    yOffset *= sens;

    yaw += xOffset;
    pitch += yOffset;

    if(pitch > 89.0f)
        pitch = 89.0f;
    if(pitch < -89.0f)
        pitch = -89.0f;
    
    glm::vec3 direction;
    direction.x = cos(glm::radians(yaw)) * cos(glm::radians(pitch));
    direction.y = sin(glm::radians(pitch));
    direction.z = sin(glm::radians(yaw)) * cos(glm::radians(pitch));
    front = glm::normalize(direction);
    
}
