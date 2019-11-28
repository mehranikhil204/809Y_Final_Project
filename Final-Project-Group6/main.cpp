#include <iostream>
#include "src/Maze/maze.h"
#include "src/API/api.h"
#include "src/LandBasedWheeled/landbasedwheeled.h"
#include "src/Algorithm/algorithm.h"

int main()
{
    fp::Maze maze;
    // Parameters wheel_number, name, speed, width, length, height, capacity, x, y, direction 
    fp::LandBasedWheeled robot(2, "robot1", 0, 10, 10, 10, 0, 0, 0, 'N');
    
    fp::Algorithm dfs;
    int i = 1;
    while(dfs.CheckGoal(robot.get_x(), robot.get_y()) == false) {
        std::cerr << "BFS Iteration " << i << std::endl;
        dfs.SolveBFS(robot, maze);
        dfs.MoveRobot(robot, maze);
        if(i == 40)
            break;
        i = i + 1;    
    }
    /*
    for(int i = 0; i<=50; i++) {
        std::cerr << "Forward Move " << robot.get_x() << " " << robot.get_y() << std::endl;
        if(fp::API::wallFront()) {
            fp::API::setWall(robot.get_x(), robot.get_y(), 'r');
            std::cerr << "Turning Right" << std::endl;
            robot.TurnRight();
        }
        else
            robot.MoveForward();
    }
    */
    return 0;
}