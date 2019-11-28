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
<<<<<<< HEAD
    fp::LandBasedWheeled robot(2, "robot1", 0, 10, 10, 10, 0, 0, 0, 'N');
    
    fp::Algorithm bfs;
    int i = 1;
    while(bfs.CheckGoal(robot.get_x(), robot.get_y()) == false) {
        std::cerr << "BFS Iteration " << i << std::endl;
        bfs.SolveBFS(robot, maze);
        bfs.MoveRobot(robot, maze);
        if(i == 40)
            break;
        i = i + 1;    
    }
    
=======
    std::shared_ptr<fp::LandBasedRobot> robot = std::make_shared<fp::LandBasedWheeled>(2, "robot1", 0, 10, 10, 10, 0, 0, 0, 'N');
    // Algorithm class object
    fp::Algorithm dfs;
    
    int i = 1;
    // Loop until goal is reached
    while(dfs.CheckGoal(robot->get_x(), robot->get_y()) == false) {
        std::cerr << "BFS Iteration " << i << std::endl; // Output for Debugging
        dfs.SolveBFS(robot, maze); // Running BFS algorithm 
        dfs.MoveRobot(robot, maze); // Moving robot along the path provided by BFS  
    i++; // Output for Debugging
    }

>>>>>>> branch_nikhil
    return 0;
}
