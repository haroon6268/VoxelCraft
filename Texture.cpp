#include "Texture.hpp"
#include <iostream>
#define STB_IMAGE_IMPLEMENTATION
#include <stb_image.h>

Texture::Texture(std::string filePath){
    int width, height, nrChannels;
    unsigned char *data = stbi_load(filePath.c_str(), &width, &height, &nrChannels, 0);
    
    
    if(data){
        auto channels = nrChannels == 4 ? GL_RGBA : GL_RGB;
        glGenTextures(1, &texture);
        glBindTexture(GL_TEXTURE_2D, texture);
        
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_NEAREST);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);

        glTexImage2D(GL_TEXTURE_2D, 0, channels, width, height, 0, channels, GL_UNSIGNED_BYTE, data);
        glGenerateMipmap(GL_TEXTURE_2D);
        std::cout << "SUCCESS: FILE LOADED\n";
    }else{
        //todo figure out what the fuck to do if this fails
        std::cout << "ERROR, FILE LOADING FAILED\n";
    }
    stbi_image_free(data); 
    glBindTexture(GL_TEXTURE_2D, 0);
}

void Texture::bindTexture(){
    glBindTexture(GL_TEXTURE_2D, texture);
}

void Texture::setActiveTexture(GLenum activeTexNumber){
    glActiveTexture(activeTexNumber);
    glBindTexture(GL_TEXTURE_2D, texture);
    glActiveTexture(GL_TEXTURE0);
}
