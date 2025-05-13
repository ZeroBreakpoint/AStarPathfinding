#pragma once
#include <glm/glm.hpp>
#include <vector>
#include <raylib.h>
#include <cfloat>

namespace AIForGames
{
    struct Node;

    // Represents a weighted connection between nodes in the graph
    struct Edge {
        Node* target;
        float cost;
        Edge() : target(nullptr), cost(0) {}
        Edge(Node* _target, float _cost) : target(_target), cost(_cost) {}
    };

    // Represents a single node in the navigation graph
    struct Node {
        glm::vec2 position;             // World position of the node
        float hScore;                   // Heuristic score
        float fScore;                   // Total cost (g + h)
        std::vector<Edge> connections; // All connections to neighbouring nodes
        float gScore;                   // Cost from start node to this node
        Node* previous;                 // Previous node in optimal path

        Node() : position(0.0f, 0.0f), gScore(FLT_MAX), hScore(FLT_MAX), fScore(FLT_MAX), previous(nullptr) {}
        Node(float x, float y) : position(x, y), gScore(FLT_MAX), hScore(FLT_MAX), fScore(FLT_MAX), previous(nullptr) {}

        void ConnectTo(Node* other, float cost); // Connects this node to another
    };
}
