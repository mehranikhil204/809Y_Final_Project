/**
* @file main.cpp
* @author Pranali Desai, Nikhil Mehra, Chayan Kumar Patodi, Zhengliang Liu, Justin Huemme, Kumar Sambhav 
* @version 1.0
*
* @section LICENSE
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License as
* published by the Free Software Foundation; either version 2 of
* the License, or (at your option) any later version.
*
* @section DESCRIPTION
*
* This project is the solution of Final Project
*/
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
    fp::Algorithm bfs;
    
    int i{1};
    bool res;
    // Loop until goal is reached
    while(bfs.CheckGoal(robot->get_x(), robot->get_y()) == false) {
        std::cerr << "BFS Iteration " << i << std::endl; // Output for Debugging
        res = bfs.SolveBFS(robot, maze); // Running BFS algorithm 
        if(res == false) {
            break;
        }
        bfs.MoveRobot(robot, maze); // Moving robot along the path provided by BFS  
    i++; // Output for Debugging
    }

    return 0;
}
