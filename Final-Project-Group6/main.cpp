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
    dfs.SolveDFS(robot, maze);
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
