#pragma once

#include <vector>
class Chunk{
  public:  
    Chunk(std::vector<std::vector<std::vector<int>>>);
    std::vector<float> getVertices();
  private:
      static Chunk heightMapToChunk(std::vector<std::vector<int>>);
      std::vector<std::vector<std::vector<int>>> mesh;
  
};
