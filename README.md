# AStarPathfinding (C++ with Raylib)

This project is my stand-alone demonstration of the A* pathfinding algorithm, implemented in C++ using Raylib and GLM.  Built for assessment at the Academy of Interactive Entertainment (AIE), the system visualises how an agent navigates an obstacle-filled grid using A* to find the optimal path.

---

## Key Features

-  **A* Algorithm Implementation**:
  - Custom-written using `gScore`, `hScore`, and `fScore` with backtracking for path reconstruction
  - Uses squared Euclidean distance as the heuristic

- **Interactive Visualization**:
  - Click to set **start** (left-click) and **end** (right-click) nodes
  - View paths drawn between nodes in real time
  - Agent moves dynamically along the calculated path

-  **Modular Design**:
  - `Pathfinding.h/.cpp` defines `Node` and `Edge` types
  - `NodeMap` manages graph creation and A* path search
  - `PathAgent` encapsulates movement and state tracking

---

## System Overview

- **Grid**: Initialized from ASCII input using characters `0` (empty space) and `1` (wall)
- **NodeMap**: Each `0` becomes a `Node`, auto-connected to neighbors
- **Agent**: Begins at start node and travels the calculated A* path at configurable speed
- **Path Drawing**: Uses Raylib’s `DrawLine()` to visually trace the calculated route

## Controls
- **Left-click** sets the start node
- **Right-click** sets the end node
