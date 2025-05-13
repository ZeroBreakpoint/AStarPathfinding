#pragma once
#include <glm/glm.hpp>
#include <vector>
#include <string>
#include <algorithm>
#include "Pathfinding.h"
#include <raylib.h>

class NodeMap
{
    int m_width, m_height;           // Width and height in nodes
    float m_cellSize;                // Pixel size of each grid cell
    AIForGames::Node** m_nodes;      // 2D array of node pointers (flattened)

public:
    NodeMap();
    ~NodeMap();
    AIForGames::Node* GetNode(int x, int y);
    void Initialise(std::vector<std::string> asciiMap, int cellSize);
    void Draw();
    std::vector<AIForGames::Node*> AStarSearch(AIForGames::Node* startNode, AIForGames::Node* endNode);
    void DrawPath(const std::vector<AIForGames::Node*>& path, Color lineColour);
    AIForGames::Node* GetClosestNode(glm::vec2 worldPos);
};