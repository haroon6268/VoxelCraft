#include "Chunk.hpp"
#include <vector>

float sampleHeightMap[3][3] = {{5,4,5},{3,4,5},{4,5,4}};

Chunk::Chunk(std::vector<std::vector<std::vector<int>>> blockList) : mesh(blockList){
    
};

Chunk Chunk::heightMapToChunk(std::vector<std::vector<int>>){ 
    //xzy format
    std::vector<std::vector<std::vector<int>>> blockList;
    for(int x = 0; x < 3; x++){
        for(int z = 0; z < 3; z++){
            //process heightMap
            float maxHeight = sampleHeightMap[x][z];
            for(int y = 0; y < 3; y++){
                if(y < maxHeight){
                    blockList[x][z][y] = 1;
                }else{
                    blockList[x][y][z] = 0;
                }
            }
        }
    }
    return Chunk(blockList);
}

std::vector<float> getVertices(){
     
}


struct Vertex{
    float x,y,z;
    float u,v;
};

enum Face{
    FRONT,
    BACK,
    LEFT,
    RIGHT,
    UP,
    DOWN 
};




std::vector<std::vector<std::vector<int>>> getChunkVector(){
      const siv::PerlinNoise::seed_type seed = 183732u;
  const siv::PerlinNoise perlin{seed};
  std::vector<std::vector<int>> heightmap(16, std::vector<int>(16,0));
  for(int x = 0; x < 16; x++){
    
    for(int y = 0; y < 16; y++){
      heightmap[x][y]= static_cast<int>(perlin.octave2D((x*0.05),(y*0.05),6) * 20);
    }

  }
  std::vector<std::vector<std::vector<int>>> chunk(16,std::vector<std::vector<int>>(16,std::vector<int>(48,0)));
  for(int x = 0; x < 16; x++){
    for(int z = 0; z < 16; z++){
      int maxheight = heightmap[x][z];
      for(int y = -32; y < 16; y++){
        int block = 1;
        if(y<maxheight)
          block = 0;
        chunk[x][z][y] = block;
        std::cout << block;
      }
      std::cout << "\n";
    }
    std::cout << "\n";
  }


}

std::vector<Vertex> getVertex(Face face){

    Vertex vertex;
    switch(face){
        case FRONT:
            break;
        case BACK:
            break;
        case LEFT:
            break;
        case RIGHT:
            break;
        case UP:
            break;
        case DOWN:
            break;
    }
}

std::vector<float> backFace {
    -0.5f, -0.5f, -0.5f,  0.0f, 0.0f, // bottom-left
     0.5f, -0.5f, -0.5f,  1.0f, 0.0f, // bottom-right    
     0.5f,  0.5f, -0.5f,  1.0f, 1.0f, // top-right              
     0.5f,  0.5f, -0.5f,  1.0f, 1.0f, // top-right
    -0.5f,  0.5f, -0.5f,  0.0f, 1.0f, // top-left
    -0.5f, -0.5f, -0.5f,  0.0f, 0.0f, // bottom-left
 
};

std::vector<float> frontFace {
    -0.5f, -0.5f, -0.5f,  0.0f, 0.0f, // bottom-left
     0.5f, -0.5f, -0.5f,  1.0f, 0.0f, // bottom-right    
     0.5f,  0.5f, -0.5f,  1.0f, 1.0f, // top-right              
     0.5f,  0.5f, -0.5f,  1.0f, 1.0f, // top-right
    -0.5f,  0.5f, -0.5f,  0.0f, 1.0f, // top-left
    -0.5f, -0.5f, -0.5f,  0.0f, 0.0f, // bottom-left
    
};

std::vector<float> leftFace {
    -0.5f,  0.5f,  0.5f,  1.0f, 0.0f, // top-right
    -0.5f,  0.5f, -0.5f,  0.0f, 0.0f, // top-left
    -0.5f, -0.5f, -0.5f,  0.0f, 1.0f, // bottom-left
    -0.5f, -0.5f, -0.5f,  0.0f, 1.0f, // bottom-left
    -0.5f, -0.5f,  0.5f,  1.0f, 1.0f, // bottom-right
    -0.5f,  0.5f,  0.5f,  1.0f, 0.0f, // top-right
    
};

std::vector<float> upFace {
    -0.5f,  0.5f, -0.5f,  0.0f, 1.0f, // bottom-left
     0.5f,  0.5f, -0.5f,  1.0f, 1.0f, // bottom-right
     0.5f,  0.5f,  0.5f,  1.0f, 0.0f, // top-right
     0.5f,  0.5f,  0.5f,  1.0f, 0.0f, // top-right
    -0.5f,  0.5f,  0.5f,  0.0f, 0.0f, // top-left
    -0.5f,  0.5f, -0.5f,  0.0f, 1.0f, // bottom-left
};

std::vector<float> downFace {
    -0.5f, -0.5f, -0.5f,  0.0f, 1.0f, // top-left
     0.5f, -0.5f, -0.5f,  1.0f, 1.0f, // top-right
     0.5f, -0.5f,  0.5f,  1.0f, 0.0f, // bottom-right
     0.5f, -0.5f,  0.5f,  1.0f, 0.0f, // bottom-right
    -0.5f, -0.5f,  0.5f,  0.0f, 0.0f, // bottom-left
    -0.5f, -0.5f, -0.5f,  0.0f, 1.0f, // top-left
    
};

    

float vertices[] = {
    // positions          // texture coords
    // Back face
    -0.5f, -0.5f, -0.5f,  0.0f, 0.0f, // bottom-left
     0.5f, -0.5f, -0.5f,  1.0f, 0.0f, // bottom-right    
     0.5f,  0.5f, -0.5f,  1.0f, 1.0f, // top-right              
     0.5f,  0.5f, -0.5f,  1.0f, 1.0f, // top-right
    -0.5f,  0.5f, -0.5f,  0.0f, 1.0f, // top-left
    -0.5f, -0.5f, -0.5f,  0.0f, 0.0f, // bottom-left
    // Front face
    -0.5f, -0.5f,  0.5f,  0.0f, 0.0f, // bottom-left
     0.5f, -0.5f,  0.5f,  1.0f, 0.0f, // bottom-right
     0.5f,  0.5f,  0.5f,  1.0f, 1.0f, // top-right
     0.5f,  0.5f,  0.5f,  1.0f, 1.0f, // top-right
    -0.5f,  0.5f,  0.5f,  0.0f, 1.0f, // top-left
    -0.5f, -0.5f,  0.5f,  0.0f, 0.0f, // bottom-left
    // Left face
    -0.5f,  0.5f,  0.5f,  1.0f, 0.0f, // top-right
    -0.5f,  0.5f, -0.5f,  0.0f, 0.0f, // top-left
    -0.5f, -0.5f, -0.5f,  0.0f, 1.0f, // bottom-left
    -0.5f, -0.5f, -0.5f,  0.0f, 1.0f, // bottom-left
    -0.5f, -0.5f,  0.5f,  1.0f, 1.0f, // bottom-right
    -0.5f,  0.5f,  0.5f,  1.0f, 0.0f, // top-right
    // Right face
     0.5f,  0.5f,  0.5f,  0.0f, 0.0f, // top-left
     0.5f,  0.5f, -0.5f,  1.0f, 0.0f, // top-right
     0.5f, -0.5f, -0.5f,  1.0f, 1.0f, // bottom-right
     0.5f, -0.5f, -0.5f,  1.0f, 1.0f, // bottom-right
     0.5f, -0.5f,  0.5f,  0.0f, 1.0f, // bottom-left
     0.5f,  0.5f,  0.5f,  0.0f, 0.0f, // top-left
    // Bottom face
    -0.5f, -0.5f, -0.5f,  0.0f, 1.0f, // top-left
     0.5f, -0.5f, -0.5f,  1.0f, 1.0f, // top-right
     0.5f, -0.5f,  0.5f,  1.0f, 0.0f, // bottom-right
     0.5f, -0.5f,  0.5f,  1.0f, 0.0f, // bottom-right
    -0.5f, -0.5f,  0.5f,  0.0f, 0.0f, // bottom-left
    -0.5f, -0.5f, -0.5f,  0.0f, 1.0f, // top-left
    // Top face
    -0.5f,  0.5f, -0.5f,  0.0f, 1.0f, // bottom-left
     0.5f,  0.5f, -0.5f,  1.0f, 1.0f, // bottom-right
     0.5f,  0.5f,  0.5f,  1.0f, 0.0f, // top-right
     0.5f,  0.5f,  0.5f,  1.0f, 0.0f, // top-right
    -0.5f,  0.5f,  0.5f,  0.0f, 0.0f, // top-left
    -0.5f,  0.5f, -0.5f,  0.0f, 1.0f, // bottom-left
};
