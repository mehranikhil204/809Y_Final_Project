#include <iostream>
#include <memory>
#include "src/Maze/maze.h"
#include "src/API/api.h"
#include "src/LandBasedWheeled/landbasedwheeled.h"
#include "src/Algorithm/algorithm.h"

int main()
{
    // Maze object
    fp::Maze maze;
    // Land Based Wheeled robot smart pointer
    // Parameters wheel_number, name, speed, width, length, height, capacity, x, y, direction
    std::shared_ptr<fp::LandBasedRobot> robot = std::make_shared<fp::LandBasedWheeled>(2, "robot1", 0, 10, 10, 10, 0, 0, 0, 'N');
    // Algorithm class object
    fp::Algorithm dfs;
	// Highlighting the start and goal points.
	fp::API color;
	color.ColorPoints();
    int i = 1;
    // Loop until goal is reached
    while(dfs.CheckGoal(robot->get_x(), robot->get_y()) == false) {
        std::cerr << "BFS Iteration " << i << std::endl; // Output for Debugging
        dfs.SolveBFS(robot, maze); // Running BFS algorithm 
        dfs.MoveRobot(robot, maze); // Moving robot along the path provided by BFS  
    i++; // Output for Debugging
    }

    return 0;
}
