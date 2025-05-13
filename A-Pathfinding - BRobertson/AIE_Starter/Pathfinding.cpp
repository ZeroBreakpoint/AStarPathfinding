#include "Pathfinding.h"

void AIForGames::Node::ConnectTo(Node* other, float cost)
{
    // Creates a one-way connection to another node
    connections.push_back(Edge(other, cost));
}
