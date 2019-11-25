#include <iostream>
#include "src/Maze/maze.h"
#include "src/API/api.h"
#include "src/LandBasedWheeled/landbasedwheeled.h"

int main()
{
    fp::Maze maze;
    // Parameters wheel_number, name, speed, width, length, height, capacity, x, y, direction 
    fp::LandBasedWheeled robot(2, "robot1", 0, 10, 10, 10, 0, 0, 0, 'N');
    
    for(int i = 0; i<=50; i++) {
        std::cout << robot.get_x() << " " << robot.get_y() << std::endl;
        if(fp::API::wallFront()) {
            fp::API::setWall(robot.get_x(), robot.get_y(), 'r');
            robot.TurnRight();
        }
        else
            robot.MoveForward();
    }
    return 0;
}
