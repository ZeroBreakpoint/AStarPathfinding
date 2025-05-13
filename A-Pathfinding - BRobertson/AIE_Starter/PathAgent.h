#pragma once
#include <iostream>
#include <algorithm>
#include <glm/glm.hpp>
#include <vector>
#include <string>
#include "raylib.h"
#include "Pathfinding.h"
#include "NodeMap.h"
#include <cfloat>

class PathAgent
{
private:
    glm::vec2 m_position{ 0.0f, 0.0f };        // Current world position
    int m_currentIndex{ 0 };                  // Index of current path node
    AIForGames::Node* m_currentNode{ nullptr }; // The node the agent is currently on
    float m_speed{ 0.0f };                    // Movement speed

public:
    std::vector<AIForGames::Node*> m_path;    // Path the agent is following

    void Update(float deltaTime);             // Called every frame to move along the path
    void GoToNode(AIForGames::Node* node, NodeMap& nodeMap); // Requests a new path
    void Draw();                              // Renders the agent
    void SetNode(AIForGames::Node* node);     // Sets the agent's starting node
    void SetSpeed(float speed);               // Adjusts movement speed
};


